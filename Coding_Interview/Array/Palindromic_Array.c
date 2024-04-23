#include <stdio.h>

// Function to check if a number is palindrome
int isPalindrome(int num) {
    int reversed = 0, original = num;
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return original == reversed;
}

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int isPalindromic = 1; // Assume all numbers are palindromic initially
    for (int i = 0; i < n; i++) {
        if (!isPalindrome(arr[i])) {
            isPalindromic = 0;
            break;
        }
    }

    if (isPalindromic)
        printf("Output: 1\nAll numbers are palindromic.\n");
    else
        printf("Output: 0\nNot all numbers are palindromic.\n");

    return 0;
}
