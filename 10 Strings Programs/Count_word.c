/*
23. Write a program to accept a text. Count and display the number of times the word "the" is appears in the text;
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[1000], word[] = "the";
    int i, count = 0;
    int len, len_word;

    printf("Enter a text: ");
    scanf("%[^\n]s", str);
    getchar(); 

    len = strlen(str);
    len_word = strlen(word);

    // Convert both the text and the word to lowercase for case-insensitive comparison
    for (i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
    for (i = 0; word[i]; i++) {
        word[i] = tolower(word[i]);
    }

    // Count occurrences of the word "the" in the text
    for (i = 0; i <= len - len_word; i++) {
        if (strncmp(&str[i], word, len_word) == 0) {
            count++;
            i += len_word - 1; // Move index past the word found to avoid overlapping counts
        }
    }

    printf("\nThe word '%s' appears %d times in the text.\n", word, count);

    return 0;
}
