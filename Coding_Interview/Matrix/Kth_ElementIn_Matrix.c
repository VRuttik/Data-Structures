#include <stdio.h>

#define N 100

int kthSmallest(int mat[][N], int n, int k) {
    int left = mat[0][0];
    int right = mat[n - 1][n - 1];

    while (left < right) {
        int mid = left + (right - left) / 2;
        int count = 0;
        for (int i = 0; i < n; i++) {
            int j = 0;
            while (j < n && mat[i][j] <= mid)
                j++;
            count += j;
        }
        if (count < k)
            left = mid + 1;
        else
            right = mid;
    }
    return left;
}

int main() {
    int matrix[N][N];
    int n, k;

    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Enter the value of k: ");
    scanf("%d", &k);

    // Find the kth smallest element
    int result = kthSmallest(matrix, n, k);

    printf("The %dth smallest element in the matrix is: %d\n", k, result);

    return 0;
}
