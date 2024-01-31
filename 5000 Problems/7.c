/*
Reverse Integer

Example 1:

Input: x = 123
Output: 321
Example 2:

Input: x = -123
Output: -321
Example 3:

Input: x = 120
Output: 21
*/

#include<stdio.h>

int reverse(int n){

    int reversed = 0;

    while(n != 0){

        int digit = n % 10;
        n /= 10;

        reversed = reversed * 10 + digit;
    }

    return reversed;
}

int main(){

    int n;

    printf("\nEnter the number: ");
    scanf("%d", &n);

    int result = reverse(n);

    if(n == 0){
        printf("Reversal causes overflow! Result cannot be computed.!\n");
    }else{
        printf("Reversed: %d\n", result);
    }

    return 0;
}