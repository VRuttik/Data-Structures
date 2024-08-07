/*
11. Write a program to read a character and print it. Also print its ASCII value. If the character is in lowercase, print it in uppercase and vice versa. Repeat the process until a "*" is entered.
*/

#include <stdio.h>

int main() {
  
    char ch;

    do {
        printf("Enter a character (enter '*' to exit): ");
        scanf(" %c", &ch); 

        if (ch != '*') {
            printf("Entered Character: %c\n", ch);
            printf("ASCII Value: %d\n", ch);

            if (ch >= 'a' && ch <= 'z') {
                printf("Uppercase: %c\n", ch - 32);
            } else if (ch >= 'A' && ch <= 'Z') {
                printf("Lowercase: %c\n", ch + 32);
            }
        }
    } while (ch != '*');

    printf("Exiting the program.\n");

    return 0;
}
