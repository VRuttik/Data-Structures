#include <stdio.h>
#include <string.h>

int longestPrefixSuffix(char *s) {
    int n = strlen(s);
    int lps[n];
    lps[0] = 0;
    int len = 0; // Length of the previous longest prefix suffix
    
    int i = 1;
    while (i < n) {
        if (s[i] == s[len]) {
            len++;
            lps[i] = len;
            i++;
        } else {
            if (len != 0) {
                len = lps[len - 1];
            } else {
                lps[i] = 0;
                i++;
            }
        }
    }
    
    return lps[n - 1];
}

int main() {
    char s[100];
    printf("Enter a string: ");
    scanf("%s", s);
    
    int result = longestPrefixSuffix(s);
    printf("Length of the longest proper prefix which is also a proper suffix: %d\n", result);
    
    return 0;
}
