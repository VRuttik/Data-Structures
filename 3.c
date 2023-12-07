/* Write a program to count the number of vovels in a text. */

#include <stdio.h>
#include <ctype.h>

int main() {
    char text[100];
    int vowelsCount = 0;

    printf("Enter the string: ");
    scanf("%[^\n]", text);

    for (int i = 0; text[i] != '\0'; ++i) {
        char currentChar = tolower(text[i]);

        if (currentChar == 'a' || currentChar == 'e' || currentChar == 'i' || currentChar == 'o' || currentChar == 'u') {
            vowelsCount++;
        }
    }

    printf("Number of vowels in the text: %d\n", vowelsCount);

    return 0;
}
