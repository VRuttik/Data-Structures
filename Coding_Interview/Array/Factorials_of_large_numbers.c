#include<stdio.h>

// Function to calculate factorial of a number N
unsigned long long factorial(int N){
    unsigned long long result = 1; // Initialized result as 1

    // Calculate factorial iteratively
    for(int i=2;i<=N;i++){
        result *= i;
    }

    return result;
}

int main(){

    int N;

    printf("Enter the value of N: ");
    scanf("%d", &N);

    unsigned long long result = factorial(N);

    printf("%d! = %llu\n", N, result);

    return 0;
}