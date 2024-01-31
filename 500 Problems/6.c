/*
Longest Palindromic Substring.

Example 1:

Input: s = "babad"
Output: "bab"
Explanation: "aba" is also a valid answer.
Example 2:

Input: s = "cbbd"
Output: "bb"
*/

#include <stdio.h>
#include <string.h>

int expandAroundCenter(char *s, int left, int right) {
    while (left >= 0 && right < strlen(s) && s[left] == s[right]) {
        left--;
        right++;
    }
    return right - left - 1;
}

char* longestPalindrome(char* s) {
    if (s == NULL || *s == '\0') {
        return "";
    }

    int start = 0, end = 0;

    for (int i = 0; i < strlen(s); i++) {
        // For odd length palindrome
        int len1 = expandAroundCenter(s, i, i);
        // For even length palindrome
        int len2 = expandAroundCenter(s, i, i + 1);

        int len = len1 > len2 ? len1 : len2;

        if (len > end - start) {
            start = i - (len - 1) / 2;
            end = i + len / 2;
        }
    }

    // Create a substring with the longest palindrome
    char* result = malloc(end - start + 2);
    strncpy(result, s + start, end - start + 1);
    result[end - start + 1] = '\0';

    return result;
}

int main() {
    char s[100];

    // Take user input for the string
    printf("Enter the string: ");
    scanf("%s", s);

    // Find the longest palindromic substring
    char* result = longestPalindrome(s);

    // Display the output
    printf("Output: %s\n", result);

    // Free the dynamically allocated memory
    free(result);

    return 0;
}
