#include<stdio.h>

int middleOfTree(int A, int B, int C){
    
    
    if(A >= B && A <= C || A <= B && A >= C){
        return A;
    }
    else if(B >= A && B <= C || B <= A && B >= C){
        return B;
    }
    else{
        return C;
    }
}

int main(){

    int A, B, C;
    printf("Enter the value of A, B, C: ");
    scanf("%d %d %d", &A, &B, &C);

    int result = middleOfTree(A, B, C);

    printf("The middle of %d, %d, %d is: %d\n", A, B, C, result);

    return 0;
}