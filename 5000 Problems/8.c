/*
Palindrom Number.

Example 1:

Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.
Example 2:

Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
*/

#include<stdio.h>
#include<stdbool.h>

bool isPalindrom(int n){

    if (n < 0)
    {
        return false; // Negative numbers are not palindromes. 
    }

    int original = n;
    int reversed = 0;

    while (n != 0)
    {
        int digit = n % 10;
        n /= 10;

        reversed = reversed * 10 + digit;
    }
    
    return original == reversed;
}

int main(){

    int n;

    printf("\nEnter the Number: ");
    scanf("%d", &n);

    if(isPalindrom(n)){
        printf("true");
    }else{
        printf("false");
    }

    return 0;
}