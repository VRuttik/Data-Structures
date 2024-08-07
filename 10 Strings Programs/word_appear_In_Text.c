/*
24. Write a program to count the total number of occurences of a word in the text. 
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char text[1000];
    char word[100];
    int count = 0;

    printf("Enter a text: ");
    scanf("%[^\n]s", text);
    getchar(); // Consume the newline character left in the input buffer

    printf("Enter a word: ");
    scanf("%s", word);

    // Convert both the text and the word to lowercase for case-insensitive comparison
    for (int i = 0; text[i]; i++) {
        text[i] = tolower(text[i]);
    }
    for (int i = 0; word[i]; i++) {
        word[i] = tolower(word[i]);
    }

    // Tokenize the text and count occurrences of the word
    char *token = strtok(text, " ");
    while (token != NULL) {
        if (strcmp(token, word) == 0) {
            count++;
        }
        token = strtok(NULL, " ");
    }

    printf("\nThe word '%s' appears %d times in the text.\n", word, count);

    return 0;
}
