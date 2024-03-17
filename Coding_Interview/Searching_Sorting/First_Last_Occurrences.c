#include<stdio.h>

void findFirstAndLast(int arr[], int n, int x) {

    int first = -1, last = -1;

    // Finding first occurrence
    for(int i = 0; i < n; i++) {
        if(arr[i] == x) {
            first = i;
            break;
        }
    }

    // Finding last occurrence
    for(int i = n - 1; i >= 0; i--) {
        if(arr[i] == x) {
            last = i;
            break;
        }
    }  

    // Printing output
    printf("%d %d", first, last); 
}

int main() {

    int n, x;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &x);

    findFirstAndLast(arr, n, x);

    return 0;
}
