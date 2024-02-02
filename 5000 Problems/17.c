/* Write a program to read two floating point numbers. Add these numbers and assign the result to an integer. Finally, display the value of all the varibles. */

#include<stdio.h>

int main(){
    
    float num1, num2;
    int result;
    
    printf("\n Enter the first floating number: ");
    scanf("%f", &num1);
     printf("\n Enter the second floating number: ");
    scanf("%f", &num2);
    
    result = num1 + num2;
    result = (int)result;
    
    printf("\nnum1 = %f\n num2 = %f\n result = %d", num1, num2, result);
    
    return 0;
}