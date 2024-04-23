#include <stdio.h>
#include <string.h>

// Function to find the length of the longest common subsequence
int lcs(int m, int n, char *str1, char *str2) {
    int L[m + 1][n + 1];
    int i, j;

    // Build L[m+1][n+1] in bottom-up fashion
    for (i = 0; i <= m; i++) {
        for (j = 0; j <= n; j++) {
            if (i == 0 || j == 0)
                L[i][j] = 0;
            else if (str1[i - 1] == str2[j - 1])
                L[i][j] = L[i - 1][j - 1] + 1;
            else
                L[i][j] = (L[i - 1][j] > L[i][j - 1]) ? L[i - 1][j] : L[i][j - 1];
        }
    }
    return L[m][n];
}

int main() {
    int m, n;
    printf("Enter the length of first string: ");
    scanf("%d", &m);
    printf("Enter the length of second string: ");
    scanf("%d", &n);

    char str1[m+1], str2[n+1];
    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);

    int length = lcs(m, n, str1, str2);
    printf("Output: %d\n", length);

    return 0;
}
