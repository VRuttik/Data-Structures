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
#include <stdlib.h>
#include <string.h>

int expandAroundCenter(char* s, int left, int right) {
    while (left >= 0 && right < strlen(s) && s[left] == s[right]) {
        left--;
        right++;
    }
    return right - left - 1;
}

char* longestPalindrome(char* s) {
    if (s == NULL || strlen(s) < 1) {
        return "";
    }

    int start = 0, end = 0;

    for (int i = 0; i < strlen(s); i++) {
        int len1 = expandAroundCenter(s, i, i);
        int len2 = expandAroundCenter(s, i, i + 1);
        int len = len1 > len2 ? len1 : len2;

        if (len > end - start) {
            start = i - (len - 1) / 2;
            end = i + len / 2;
        }
    }

    char* result = malloc((end - start + 2) * sizeof(char));
    strncpy(result, s + start, end - start + 1);
    result[end - start + 1] = '\0';

    return result;
}

int main() {
    char user_input[100];

    printf("Enter a string: ");
    scanf("%s", user_input);

    char* result = longestPalindrome(user_input);
    printf("Longest palindromic substring: %s\n", result);

    // Free allocated memory
    free(result);

    return 0;
}
