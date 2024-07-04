/*
30. Write a program to read and display a sqaure using function.
*/

#include <stdio.h>

int elementSquare(int arr[], int n) {
  printf("\n Enter the array elements: ");
  for (int i = 0; i < n; i++) {
    printf("[%d] = ", i);
    scanf("%d", &arr[i]);
  }

  printf("\nThe squares of the array elements are: ");
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i] * arr[i]);
  }
}

int main() {

  int n;
  printf("\nEnter the size of the array: ");
  scanf("%d", &n);

  if (n < 0) {
    printf("\nArray size should be greater than 0");
  }

  int arr[n];

  elementSquare(arr, n);

  return 0;
}
