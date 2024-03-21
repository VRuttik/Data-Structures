#include <stdio.h>
#include <string.h>

#define MOD 1000000007

int countPalindromicSubsequences(char *s) {
    int n = strlen(s);
    long long dp[n][n];
    memset(dp, 0, sizeof(dp));

    for (int i = 0; i < n; i++)
        dp[i][i] = 1;

    for (int len = 2; len <= n; len++) {
        for (int i = 0; i < n - len + 1; i++) {
            int j = i + len - 1;
            if (s[i] == s[j]) {
                dp[i][j] = dp[i + 1][j] + dp[i][j - 1] + 1;
            } else {
                dp[i][j] = dp[i + 1][j] + dp[i][j - 1] - dp[i + 1][j - 1];
                if (dp[i][j] < 0)
                    dp[i][j] += MOD;
            }
            dp[i][j] %= MOD;

            for (int k = i + 1; k < j; k++) {
                if (s[i] == s[k])
                    dp[i][j] += dp[i + 1][k - 1] + 1;
                if (s[j] == s[k])
                    dp[i][j] += dp[k + 1][j - 1] + 1;
            }
            dp[i][j] %= MOD;
        }
    }
    return dp[0][n - 1];
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    
    int result = countPalindromicSubsequences(str);
    printf("Number of palindromic subsequences: %d\n", result);

    return 0;
}
