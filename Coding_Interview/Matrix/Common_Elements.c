#include <stdio.h>

void findCommon(int A[], int B[], int C[], int n1, int n2, int n3) {
    int i = 0, j = 0, k = 0;
    int found = 0;

    while (i < n1 && j < n2 && k < n3) {
        if (A[i] == B[j] && B[j] == C[k]) {
            if (!found || (found && A[i] != A[i - 1])) {
                printf("%d ", A[i]);
                found = 1;
            }
            i++;
            j++;
            k++;
        } else if (A[i] < B[j]) {
            i++;
        } else if (B[j] < C[k]) {
            j++;
        } else {
            k++;
        }
    }
}

int main() {
    int A[100], B[100], C[100];
    int n1, n2, n3;

    printf("Enter the size of the first array (A): ");
    scanf("%d", &n1);
    printf("Enter the elements of the first array (A):\n");
    for (int i = 0; i < n1; i++) {
        scanf("%d", &A[i]);
    }

    printf("Enter the size of the second array (B): ");
    scanf("%d", &n2);
    printf("Enter the elements of the second array (B):\n");
    for (int i = 0; i < n2; i++) {
        scanf("%d", &B[i]);
    }

    printf("Enter the size of the third array (C): ");
    scanf("%d", &n3);
    printf("Enter the elements of the third array (C):\n");
    for (int i = 0; i < n3; i++) {
        scanf("%d", &C[i]);
    }

    printf("Common elements in all three arrays are: ");
    findCommon(A, B, C, n1, n2, n3);
    printf("\n");

    return 0;
}
