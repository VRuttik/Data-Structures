/* Write a program to print the count of even numbers between 1 - 200. Also print their sum. */

#include<stdio.h>

int main() {
    
    int n = 200, count = 0, sum = 0;
    
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            count++;
            sum = sum + i;
        }
    }
    
    printf("Count of even numbers = %d\n", count);
    printf("Sum of even numbers = %d\n", sum);
    
    return 0;
}
