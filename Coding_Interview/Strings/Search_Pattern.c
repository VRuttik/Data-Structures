#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define d 256 // Number of characters in the input alphabet
#define q 101 // A prime number

void searchPattern(char *text, char *pattern) {
    int M = strlen(pattern);
    int N = strlen(text);
    int i, j;
    int p = 0; // Hash value for pattern
    int t = 0; // Hash value for text
    int h = 1;

    // The value of h would be "pow(d, M-1)%q"
    for (i = 0; i < M - 1; i++)
        h = (h * d) % q;

    // Calculate the hash value of pattern and the first window of text
    for (i = 0; i < M; i++) {
        p = (d * p + pattern[i]) % q;
        t = (d * t + text[i]) % q;
    }

    // Slide the pattern over text one by one
    for (i = 0; i <= N - M; i++) {
        // Check the hash values of current window of text and pattern
        // If the hash values match, then check for characters one by one
        if (p == t) {
            // Check for characters one by one
            for (j = 0; j < M; j++) {
                if (text[i+j] != pattern[j])
                    break;
            }
            if (j == M)
                printf("%d ", i+1);
        }

        // Calculate the hash value for the next window of text: Remove leading digit, add trailing digit
        if (i < N - M) {
            t = (d * (t - text[i] * h) + text[i + M]) % q;
            // Make sure t is positive
            if (t < 0)
                t = (t + q);
        }
    }
}

int main() {
    char text[100];
    char pattern[100];

    printf("Enter the text string: ");
    scanf("%s", text);

    printf("Enter the pattern string: ");
    scanf("%s", pattern);

    printf("Output: [");
    searchPattern(text, pattern);
    printf("]\n");

    return 0;
}
