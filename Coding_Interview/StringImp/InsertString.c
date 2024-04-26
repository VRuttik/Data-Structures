#include <stdio.h>
#include <string.h>

int main() {
    char text[100], str[100], ins_text[200];
    int i = 0, j = 0, k = 0, pos;

    printf("\nEnter the main text: ");
    scanf("%[^\n]%*c", text);

    printf("\nEnter the string to be inserted: ");
    scanf("%[^\n]%*c", str);

    printf("\nEnter the position at which the string has to be inserted: ");
    scanf("%d", &pos);

    // Ensure the insertion position is within range
    if (pos < 0 || pos > strlen(text)) {
        printf("\nError: Insertion position out of range.\n");
        return 1;
    }

    // Copy text before insertion point
    while (i < pos) {
        ins_text[j] = text[i];
        i++;
        j++;
    }

    // Insert space
    ins_text[j] = ' ';
    j++;

    // Copy inserted string
    while (str[k] != '\0') {
        ins_text[j] = str[k];
        j++;
        k++;
    }

    // Copy remaining text after insertion point
    while (text[i] != '\0') {
        ins_text[j] = text[i];
        i++;
        j++;
    }

    ins_text[j] = '\0';
    printf("\nThe new string is: %s\n", ins_text);

    return 0;
}