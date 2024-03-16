#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to find the longest palindromic substring
char* longestPalindrome(char *s) {
    int len = strlen(s);
    int start = 0, maxLength = 1; // Initialize start index and maximum length of palindrome

    // Function to expand around center for odd length palindromes
    int expandAroundCenter(int left, int right) {
        while (left >= 0 && right < len && s[left] == s[right]) {
            left--;
            right++;
        }
        return right - left - 1; // Return length of the palindrome
    }

    for (int i = 0; i < len; i++) {
        // Find the longest odd length palindrome with center at current character
        int len1 = expandAroundCenter(i, i);
        // Find the longest even length palindrome with center at current character and next character
        int len2 = expandAroundCenter(i, i + 1);
        
        int maxLen = len1 > len2 ? len1 : len2; // Maximum length between len1 and len2
        if (maxLen > maxLength) {
            maxLength = maxLen; // Update maximum length of palindrome
            start = i - (maxLen - 1) / 2; // Update start index of palindrome
        }
    }

    // Create a substring of the longest palindromic substring
    char *result = (char *)malloc((maxLength + 1) * sizeof(char));
    if (result == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    strncpy(result, s + start, maxLength);
    result[maxLength] = '\0'; // Null-terminate the string
    return result;
}

int main() {
    char s[100];

    // Prompt the user to enter a string
    printf("Enter a string: ");
    scanf("%s", s);

    // Find the longest palindromic substring
    char *longestPalindromicSubstring = longestPalindrome(s);

    // Print the result
    printf("Longest palindromic substring: %s\n", longestPalindromicSubstring);

    // Free the memory allocated for the result
    free(longestPalindromicSubstring);

    return 0;
}
