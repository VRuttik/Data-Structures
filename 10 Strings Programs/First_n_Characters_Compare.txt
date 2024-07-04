/*
18. Write a program in C to conmpares first n characters of one string with first n characters of another string..
*/

#include <stdio.h>
#include <string.h>

int main() {

    char str1[100], str2[100];
    int i, n;
    int are_equal = 1; // Assume strings are equal initially

    printf("\nEnter the first string: ");
    scanf("%[^\n]s", str1);

    getchar();

    printf("\nEnter the second string: ");
    scanf("%[^\n]s", str2);

    printf("\nEnter the number of characters to be compared: ");
    scanf("%d", &n);

    // Compare the first n characters
    for(i = 0; i < n; i++) {
        if(str1[i] != str2[i]) {
            are_equal = 0;
            break;
        }
    }

    if(are_equal) {
        printf("\nThe strings are equal in the first %d characters.\n", n);
    } else {
        printf("\nThe strings are not equal in the first %d characters.\n", n);
    }

    return 0;
}
