/*
21. Write a program to count the number of digits, uppercase characters, lowercase characters, and special characters in a given string.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    int i, alphabets, digits, special, lower, upper;
    alphabets = digits = special = lower = upper = 0;

    printf("Enter any string: ");
    scanf("%[^\n]s", str);

    for (i = 0; i < strlen(str); i++) {
        if (isdigit(str[i])) {
            digits++;
        } else if (isalpha(str[i])) {
            alphabets++;
            if (islower(str[i])) {
                lower++;
            } else if (isupper(str[i])) {
                upper++;
            }
        } else {
            special++;
        }
    }

    printf("\nAlphabets: %d", alphabets);
    printf("\nDigits: %d", digits);
    printf("\nSpecial characters: %d", special);
    printf("\nLowercase: %d", lower);
    printf("\nUppercase: %d\n", upper);

    return 0;
}
