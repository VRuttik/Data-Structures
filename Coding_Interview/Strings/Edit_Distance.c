#include <stdio.h>
#include <string.h>

#define MAX_LEN 1000

int min(int a, int b) {
    return (a < b) ? a : b;
}

int minOperations(char *s, char *t) {
    int m = strlen(s);
    int n = strlen(t);

    int dp[m + 1][n + 1];

    for (int i = 0; i <= m; i++) {
        for (int j = 0; j <= n; j++) {
            if (i == 0)
                dp[i][j] = j;
            else if (j == 0)
                dp[i][j] = i;
            else if (s[i - 1] == t[j - 1])
                dp[i][j] = dp[i - 1][j - 1];
            else
                dp[i][j] = 1 + min(min(dp[i - 1][j], dp[i][j - 1]), dp[i - 1][j - 1]);
        }
    }

    return dp[m][n];
}

int main() {
    char s[MAX_LEN], t[MAX_LEN];

    printf("Enter the first string: ");
    scanf("%s", s);

    printf("Enter the second string: ");
    scanf("%s", t);

    int result = minOperations(s, t);
    printf("The minimum number of operations required to convert '%s' to '%s' is: %d\n", s, t, result);

    return 0;
}
