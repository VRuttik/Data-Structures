/*
17. Write a program in C to concatenate first n characters of string with another string.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int n;

    printf("\nEnter first string: ");
    scanf("%[^\n]s", str1);

    // Clear the input buffer
    getchar();

    printf("\nEnter the second string: ");
    scanf("%[^\n]s", str2);

    printf("\nEnter the number of characters to be concatenated: ");
    scanf("%d", &n);

    // Concatenate the first n characters of str2 to str1
    strncat(str1, str2, n);

    printf("\nThe concatenated string is: %s\n", str1);

    return 0;
}
