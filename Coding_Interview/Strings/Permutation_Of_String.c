#include <stdio.h>
#include <string.h>

// Function to swap characters at position i and j in the string
void swap(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

// Function to generate permutations of a string
void generatePermutations(char *str, int start, int end) {
    // If the start index reaches the end, print the permutation
    if (start == end) {
        printf("%s ", str);
        return;
    }

    // Iterate through the string and recursively generate permutations
    for (int i = start; i <= end; i++) {
        // Swap characters at position start and i
        swap(&str[start], &str[i]);
        // Recursively generate permutations for the remaining substring
        generatePermutations(str, start + 1, end);
        // Backtrack: Undo the previous swap to restore the original string
        swap(&str[start], &str[i]);
    }
}

int main() {
    char str[100];

    // Prompt the user to enter a string
    printf("Enter a string: ");
    scanf("%s", str);

    int len = strlen(str);

    // Generate permutations of the input string
    printf("Permutations of the string are: \n");
    generatePermutations(str, 0, len - 1);

    return 0;
}
