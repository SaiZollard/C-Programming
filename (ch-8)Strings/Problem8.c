/*
Write a program to check whether a given character is 
present in a string or not.
*/

#include <stdio.h>
#include <string.h>

// Function to check if a character is present in a string
int isCharPresent(char *str, char c) {
    // Iterate over each character in the string
    for (int i = 0; i < strlen(str); i++) {
        // Check if the current character matches the given character
        if (str[i] == c) {
            return 1; // Character found
        }
    }
    return 0; // Character not found
}

int main() {
    char str[100];
    char c;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strlen(str) - 1] = '\0'; // Remove the newline character

    printf("Enter a character to search: ");
    scanf(" %c", &c);

    if (isCharPresent(str, c)) {
        printf("Character '%c' is present in the string.\n", c);
    } else {
        printf("Character '%c' is not present in the string.\n", c);
    }

    return 0;
}