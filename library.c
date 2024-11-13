#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100
#define MAX_BORROWED 100
#define MAX_TITLE_LEN 50
#define MAX_AUTHOR_LEN 50

typedef struct {
    int id;
    char title[MAX_TITLE_LEN];
    char author[MAX_AUTHOR_LEN];
    int isBorrowed; 
} Book;

typedef struct {
    int studentId;
    int bookId;
} BorrowedBook;

Book library[MAX_BOOKS];
BorrowedBook borrowedBooks[MAX_BORROWED];
int totalBooks = 0;
int totalBorrowed = 0;

void addBook() {
    if (totalBooks >= MAX_BOOKS) {
        printf("Library is full, cannot add more books.\n");
        return;
    }

    printf("Enter Book ID: ");
    scanf("%d", &library[totalBooks].id);
    getchar(); 

    printf("Enter Book Title: ");
    fgets(library[totalBooks].title, MAX_TITLE_LEN, stdin);
    library[totalBooks].title[strcspn(library[totalBooks].title, "\n")] = 0; // Remove newline

    printf("Enter Book Author: ");
    fgets(library[totalBooks].author, MAX_AUTHOR_LEN, stdin);
    library[totalBooks].author[strcspn(library[totalBooks].author, "\n")] = 0; // Remove newline

    library[totalBooks].isBorrowed = 0; 

    printf("Book Added Successfully.\n");
    totalBooks++;
}

void borrowBook() {
    int studentId, bookId, i;
    printf("Enter Student ID: ");
    scanf("%d", &studentId);
    printf("Enter Book ID: ");
    scanf("%d", &bookId);

    for (i = 0; i < totalBooks; i++) {
        if (library[i].id == bookId) {
            if (library[i].isBorrowed == 1) {
                printf("Book is already borrowed.\n");
                return;
            }
            library[i].isBorrowed = 1;
            borrowedBooks[totalBorrowed].studentId = studentId;
            borrowedBooks[totalBorrowed].bookId = bookId;
            totalBorrowed++;
            printf("Book Borrowed Successfully by Student %d.\n", studentId);
            return;
        }
    }
    printf("Book not found.\n");
}

void returnBook() {
    int studentId, bookId, daysLate, i;
    printf("Enter Student ID: ");
    scanf("%d", &studentId);
    printf("Enter Book ID: ");
    scanf("%d", &bookId);
    printf("Enter Number of Days Late: ");
    scanf("%d", &daysLate);

    for (i = 0; i < totalBooks; i++) {
        if (library[i].id == bookId) {
            if (library[i].isBorrowed == 0) {
                printf("Book is not borrowed.\n");
                return;
            }
            library[i].isBorrowed = 0;

            if (daysLate > 0) {
                printf("Fine of Rs. %d Applied.\n", daysLate * 10);
            }
            printf("Book Returned Successfully.\n");
            return;
        }
    }
    printf("Book not found.\n");
}

void generateReports() {
    int i;
    printf("\nList of All Available Books:\n");
    for (i = 0; i < totalBooks; i++) {
        if (library[i].isBorrowed == 0) {
            printf("Book ID: %d, Title: \"%s\", Author: \"%s\"\n", library[i].id, library[i].title, library[i].author);
        }
    }

    printf("\nList of Borrowed Books:\n");
    for (i = 0; i < totalBorrowed; i++) {
        int bookId = borrowedBooks[i].bookId;
        for (int j = 0; j < totalBooks; j++) {
            if (library[j].id == bookId) {
                printf("Student ID: %d, Borrowed: \"%s\"\n", borrowedBooks[i].studentId, library[j].title);
            }
        }
    }
}
int main() {
    int choice;
    do {
        printf("\nLibrary Management System\n");
        printf("1. Add Book\n");
        printf("2. Borrow Book\n");
        printf("3. Return Book\n");
        printf("4. Generate Reports\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            addBook();
            break;
        case 2:
            borrowBook();
            break;
        case 3:
            returnBook();
            break;
        case 4:
            generateReports();
            break;
        case 5:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}