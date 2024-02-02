/* Write a program to read the address of a user. Display the result by breaking it in multiple lines. */

#include <stdio.h>

int main() {
    char address[1000];

    printf("Enter your address:\n");
    scanf(" %[^\n]", address);

    printf("\nAddress:\n");
    printf("%s\n", address);

    return 0;
}