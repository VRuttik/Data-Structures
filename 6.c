/* Write a program to read a floating point number. Display the rightmost digit of the integral part of the number. */

#include<stdio.h>

int main() {
    float num1;
    int num2;
    float result;

    printf("\nEnter the floating number: ");
    scanf("%f", &num1);
    
    num2 = (int)num1;
    result = num2 % 10;

    printf("Rightmost digit of the integral part: %.0f\n", result);

    return 0;
}
