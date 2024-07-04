/*
20. Write a program in C that removes leading and trailling spaces from a string.
*/

#include <stdio.h>
#include <string.h>

void trimSpaces(char *str) {
    int start = 0, end = strlen(str) - 1;

    // Find the first non-space character
    while (str[start] == ' ' && start <= end) {
        start++;
    }

    // Find the last non-space character
    while (str[end] == ' ' && end >= start) {
        end--;
    }

    // Shift characters to the beginning of the string
    int i;
    for (i = 0; start <= end; start++, i++) {
        str[i] = str[start];
    }
    str[i] = '\0'; // Null-terminate the trimmed string
}

int main() {
    char str[100];

    printf("\nEnter the string: ");
    scanf("%[^\n]s", str);

    trimSpaces(str);

    printf("\nThe trimmed string is: '%s'\n", str);

    return 0;
}
