#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to find all possible subsequences of a string
void powerSet(char *s, int n) {
    int total = 1 << n; // Total number of subsets (2^n)
    
    // Sort the string lexicographically
    qsort(s, n, sizeof(char), strcmp);
    
    // Generate and print all subsets
    for (int i = 0; i < total; i++) {
        printf("%c", '{');
        for (int j = 0; j < n; j++) {
            // Check if the jth bit of i is set
            if (i & (1 << j)) {
                printf("%c", s[j]);
            }
        }
        printf("%c", '}');
        if (i != total - 1) {
            printf("%c", ' ');
        }
    }
}

int main() {
    char s[100];
    
    // Input string from the user
    printf("Enter the string: ");
    scanf("%s", s);

    // Find the length of the string
    int n = strlen(s);

    // Find all possible subsequences in lexicographically sorted order
    powerSet(s, n);

    return 0;
}
