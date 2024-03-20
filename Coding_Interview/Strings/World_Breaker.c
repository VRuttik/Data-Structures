#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define MAX_WORDS 100
#define MAX_LENGTH 100

bool isInDictionary(char* s, char** dictionary, int n) {
    int s_len = strlen(s);
    for (int i = 0; i < n; i++) {
        int word_len = strlen(dictionary[i]);
        if (s_len == word_len && strncmp(s, dictionary[i], s_len) == 0)
            return true;
    }
    return false;
}

bool wordBreak(char* s, char** dictionary, int n) {
    int len = strlen(s);
    bool dp[len + 1];
    memset(dp, false, sizeof(dp));
    dp[0] = true;

    for (int i = 1; i <= len; i++) {
        for (int j = 0; j < i; j++) {
            if (dp[j] && isInDictionary(s + j, dictionary, n)) {
                dp[i] = true;
                break;
            }
        }
    }

    return dp[len];
}

int main() {
    int n;
    printf("Enter the number of words in the dictionary: ");
    scanf("%d", &n);

    char* dictionary[MAX_WORDS];
    printf("Enter the words of the dictionary:\n");
    for (int i = 0; i < n; i++) {
        dictionary[i] = (char*)malloc(sizeof(char) * MAX_LENGTH);
        scanf("%s", dictionary[i]);
    }

    char s[MAX_LENGTH];
    printf("Enter the string: ");
    scanf("%s", s);

    if (wordBreak(s, dictionary, n))
        printf("Output: 1\nExplanation: The string can be segmented.\n");
    else
        printf("Output: 0\nExplanation: The string cannot be segmented.\n");

    return 0;
}

// Something wrong in this code.