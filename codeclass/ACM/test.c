#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    fgets(s, 100, stdin);
    
    // Remove the newline character if present
    int length = strlen(s);
    if (s[length - 1] == '\n') {
        s[length - 1] = '\0';
        length--;
    }

    int check = 0;
    for (int i = 0; i < length / 2; i++) {
        if (s[i] != s[length - i - 1]) {
            check = 1;
            printf("The given string \"%s\" is not a palindrome.\n", s);
            break;
        }
    }

    if (check == 0) {
        printf("The given string \"%s\" is a palindrome.\n", s);
    }

    return 0;
}
