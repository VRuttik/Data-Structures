/* COunt Squares.
Example 1:

Input :
N = 9
Output:
2
Explanation:
1 and 4 are the only Perfect Squares
less than 9. So, the Output is 2.
*/

#include<stdio.h>

// Function to count perfect sqaures less than N

int countSquares(int N){

    int count = 0;
    int i=1;

    // Iterate through numbers until i^2 >= N
    while(i*i<N){
        count++;
        i++;
    }

    // Subtract 1 from count to exclude N itself if it's a perfect square
    return count;
}

int main(){

    int N;
    printf("Enter the value of N: ");
    scanf("%d", &N);

    int result = countSquares(N);

    printf("Number of perfect squares less than %d is: %d\n", N, result);

    return 0;
}