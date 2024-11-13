#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define MAX_GRID_SIZE 8

char board[MAX_GRID_SIZE][MAX_GRID_SIZE]; // The game board with pairs
char revealed[MAX_GRID_SIZE][MAX_GRID_SIZE]; // Revealed cards
int gridSize; // Current grid size
int pairsFound = 0;

// Function prototypes
void initializeBoard();
void shuffleBoard(char symbols[]);
void displayBoard();
void revealCard(int row, int col);
int isValidMove(int row, int col);
int checkForPair(int firstRow, int firstCol, int secondRow, int secondCol);
void playGame();
void clearBuffer();
void chooseLevel();
void displayInstructions(); // Function to display instructions

int main() {
    srand(time(NULL)); // Seed the random number generator
    printf("Welcome to the Memory Game!\n");
    displayInstructions(); // Display instructions
    chooseLevel();
    
    // Main game loop
    while (1) {
        playGame();
        printf("Do you want to play again? (1 for Yes, 0 for No): ");
        int choice;
        scanf("%d", &choice);
        clearBuffer();
        if (choice == 0) break; // Exit the game loop
    }

    printf("Thanks for playing!\n");
    return 0;
}

// Function to display instructions
void displayInstructions() {
    printf("\nInstructions:\n");
    printf("1. The game consists of a grid of cards faced down.\n");
    printf("2. Your goal is to find all matching pairs of cards.\n");
    printf("3. You will select two cards by entering their row and column numbers (1-based).\n");
    printf("4. If the two selected cards match, they will remain revealed.\n");
    printf("5. If they do not match, they will be hidden again.\n");
    printf("6. The game ends when all pairs are found.\n");
    printf("7. Good luck and have fun!\n\n");
}

// Function to choose the level and set grid size
void chooseLevel() {
    printf("Choose your level:\n1. 4x4\n2. 6x6\n3. 8x8\n");
    int level;
    scanf("%d", &level);
    clearBuffer();

    switch (level) {
        case 1:
            gridSize = 4;
            break;
        case 2:
            gridSize = 6;
            break;
        case 3:
            gridSize = 8;
            break;
        default:
            printf("Invalid choice. Defaulting to 4x4.\n");
            gridSize = 4;
            break;
    }

    printf("You have chosen a %dx%d grid. You will reveal two cards by entering their row and column numbers (1-based).\n", gridSize, gridSize);
}

// Function to initialize the game board with pairs
void initializeBoard() {
    int totalPairs = (gridSize * gridSize) / 2;
    char symbols[totalPairs];
    for (int i = 0; i < totalPairs; i++) {
        symbols[i] = 'A' + i; // Fill symbols A, B, C, ...
    }
    shuffleBoard(symbols);
}

// Function to shuffle symbols and place them on the board
void shuffleBoard(char symbols[]) {
    int totalPairs = (gridSize * gridSize) / 2;
    int index = 0;
    for (int i = 0; i < totalPairs; i++) {
        board[index / gridSize][index % gridSize] = symbols[i];
        index++;
        board[index / gridSize][index % gridSize] = symbols[i]; // Place the same symbol for pairs
        index++;
    }

    // Shuffle the board
    for (int i = totalPairs * 2 - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        char temp = board[i / gridSize][i % gridSize];
        board[i / gridSize][i % gridSize] = board[j / gridSize][j % gridSize];
        board[j / gridSize][j % gridSize] = temp;
    }

    // Initialize revealed state
    for (int i = 0; i < gridSize; i++) {
        for (int j = 0; j < gridSize; j++) {
            revealed[i][j] = '*'; // Hidden card
        }
    }
}

// Function to display the board
void displayBoard() {
    printf("Current Board:\n");
    for (int i = 0; i < gridSize; i++) {
        for (int j = 0; j < gridSize; j++) {
            printf("%c ", revealed[i][j]);
        }
        printf("\n");
    }
}

// Function to reveal a card at the specified position
void revealCard(int row, int col) {
    revealed[row][col] = board[row][col];
}

// Function to check if a move is valid
int isValidMove(int row, int col) {
    return (row >= 0 && row < gridSize && col >= 0 && col < gridSize && revealed[row][col] == '*');
}

// Function to check if two selected cards match
int checkForPair(int firstRow, int firstCol, int secondRow, int secondCol) {
    return board[firstRow][firstCol] == board[secondRow][secondCol];
}

// Function to handle the game logic
void playGame() {
    initializeBoard();
    pairsFound = 0; // Reset pairs found
    int firstRow, firstCol, secondRow, secondCol;

    while (pairsFound < (gridSize * gridSize) / 2) {
        displayBoard();
        printf("Select the first card:\n");
        printf("Enter row number (1 to %d): ", gridSize);
        scanf("%d", &firstRow);
        printf("Enter column number (1 to %d): ", gridSize);
        scanf("%d", &firstCol);
        clearBuffer();

        // Convert to 0-based index
        firstRow -= 1;
        firstCol -= 1;

        if (!isValidMove(firstRow, firstCol)) {
            printf("Invalid move. Try again.\n");
            continue;
        }

        revealCard(firstRow, firstCol);
        displayBoard();

        printf("Select the second card:\n");
        printf("Enter row number (1 to %d): ", gridSize);
        scanf("%d", &secondRow);
        printf("Enter column number (1 to %d): ", gridSize);
        scanf("%d", &secondCol);
        clearBuffer();

        // Convert to 0-based index
        secondRow -= 1;
        secondCol -= 1;

        // Check if the second move is valid
        if (isValidMove(secondRow, secondCol) && (firstRow != secondRow || firstCol != secondCol)) {
            revealCard(secondRow, secondCol);
            displayBoard();

            // Check for a match
            if (checkForPair(firstRow, firstCol, secondRow, secondCol)) {
                printf("It's a match!\n");
                pairsFound++;
            } else {
                printf("Not a match. Try again.\n");
                revealed[firstRow][firstCol] = '*'; // Hide the first card again
                revealed[secondRow][secondCol] = '*'; // Hide the second card again
            }
        } else {
            printf("Invalid move. The first card will be hidden again.\n");
            revealed[firstRow][firstCol] = '*'; // Hide the first card again
        }
    }

    printf("Congratulations! You've found all pairs!\n");
}

// Function to clear input buffer
void clearBuffer() {
    while (getchar() != '\n');
}