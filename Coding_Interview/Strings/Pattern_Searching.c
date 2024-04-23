#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// Function to check if pattern is present in string
bool searchPattern(char *string, char *pattern) {
    // Check if pattern is present in string
    if (strstr(string, pattern) != NULL) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int num_tests;
    printf("Enter the number of test cases: ");
    scanf("%d", &num_tests);
    getchar(); // Consume newline character left in the buffer
    
    // Iterate through each test case
    for (int i = 0; i < num_tests; i++) {
        char string[100]; // Assuming maximum string length is 100
        char pattern[100]; // Assuming maximum pattern length is 100
        
        printf("Enter the string: ");
        scanf("%99s", string); // Read string, 99 to avoid buffer overflow
        printf("Enter the pattern: ");
        scanf("%99s", pattern); // Read pattern, 99 to avoid buffer overflow
        
        // Check if pattern is present in string and print result
        if (searchPattern(string, pattern)) {
            printf("Present\n");
        } else {
            printf("Not present\n");
        }
    }
    return 0;
}
