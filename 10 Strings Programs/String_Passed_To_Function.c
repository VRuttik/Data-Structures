/*
16. Write a program in which a string is passed an argument to a function.
*/

#include <stdio.h>
#include <string.h>

void stringPassed(char *str) {
    printf("%s", str);
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    printf("The string passed is: ");
    stringPassed(str);

    return 0;
}
