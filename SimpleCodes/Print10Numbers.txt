/* 
1. Write a program to print the  following pattern.

1, 2, 3,
4, 5, 6,
7, 8, 9,
10

*/

#include <stdio.h>

int main() {
    int n = 10;
    int i;
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (i = 0; i < n; i++) {
        if (i != 0 && i % 3 == 0) {
            printf("\n");
        }
        if (i < n - 1) {
            printf("%d, ", arr[i]);
        } else {
            printf("%d", arr[i]);
        }
    }

    return 0;
}
