/*
14. Write a program to add two floating point numbers using pointers and functions. 
*/

#include<stdio.h>

float add(float *a, float *b) {
    return *a + *b;
}

int main() {
    float n1, n2;
    float *p1, *p2;

    printf("Enter two floating point numbers: ");
    scanf("%f %f", &n1, &n2);

    p1 = &n1;
    p2 = &n2;

    // Call the add function and store the result
    float result = add(p1, p2);

    printf("Sum of two floating point numbers is: %f\n", result);

    return 0;
}
