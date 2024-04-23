#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to find the longest common prefix
char* longestCommonPrefix(char **strs, int n) {
    if (n == 0) return ""; // If no strings are present, return an empty string
    
    // Find the minimum length string
    int minLen = strlen(strs[0]);
    for (int i = 1; i < n; i++) {
        int len = strlen(strs[i]);
        if (len < minLen)
            minLen = len;
    }
    
    // Iterate over each character of the minimum length string
    for (int i = 0; i < minLen; i++) {
        // Check if all characters at index i are same
        for (int j = 1; j < n; j++) {
            if (strs[j][i] != strs[0][i]) {
                // If not, return the substring up to this index
                char *prefix = (char*)malloc((i + 1) * sizeof(char));
                strncpy(prefix, strs[0], i);
                prefix[i] = '\0';
                return prefix;
            }
        }
    }
    
    // If all strings have the same characters up to the length of the shortest string
    // Return the shortest string as the common prefix
    char *prefix = (char*)malloc((minLen + 1) * sizeof(char));
    strncpy(prefix, strs[0], minLen);
    prefix[minLen] = '\0';
    return prefix;
}

int main() {
    int n;
    printf("Enter the number of strings: ");
    scanf("%d", &n);
    getchar(); // Consume newline character left in the buffer
    
    // Allocate memory for array of strings
    char **arr = (char**)malloc(n * sizeof(char*));
    
    // Input strings from the user
    for (int i = 0; i < n; i++) {
        printf("Enter string %d: ", i + 1);
        char buffer[100];
        scanf("%s", buffer);
        arr[i] = strdup(buffer); // Duplicate the input string and store it
    }
    
    // Find the longest common prefix
    char *result = longestCommonPrefix(arr, n);
    
    // Print the result
    if (strlen(result) == 0) {
        printf("Output: -1\n");
    } else {
        printf("Output: %s\n", result);
    }
    
    // Free allocated memory
    free(result);
    for (int i = 0; i < n; i++) {
        free(arr[i]);
    }
    free(arr);
    
    return 0;
}
