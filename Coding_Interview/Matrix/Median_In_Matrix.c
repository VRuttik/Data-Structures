#include<stdio.h>
#include<stdlib.h>
#include<limits.h> // Include this header for INT_MAX and INT_MIN

// Function to count the number of elements smaller than or equal to 'mid' in the matrix
int countSmallerOrEqual(int matrix[][100], int R, int C, int mid){
    int count = 0;
    for(int i = 0; i < R; i++){
        for(int j = 0; j < C; j++){
            if(matrix[i][j] <= mid){
                count++;
            }
        }
    }
    return count;
}

// Function to find the median of the row-wise sorted matrix
int findMedian(int matrix[][100], int R, int C){
    // Minimum and Maximum possible values in the matrix
    int min = INT_MAX, max = INT_MIN;
    for(int i = 0; i < R; i++){
        if(matrix[i][0] < min){
            min = matrix[i][0];
        }
        if(matrix[i][C - 1] > max){
            max = matrix[i][C - 1];
        }
    }

    // Binary search to find the median
    while(min < max){
        int mid = min + (max - min) / 2;
        int count = countSmallerOrEqual(matrix, R, C, mid);
        if(count < (R * C) / 2 + 1){
            min = mid + 1;
        }
        else{
            max = mid;
        }
    }
    return min;
}

int main(){
    int R, C, matrix[100][100];

    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &R, &C);

    printf("Enter the elements of the matrix: \n");
    for(int i = 0; i < R; i++){
        for(int j = 0; j < C; j++){
            scanf("%d", &matrix[i][j]);
        }
    }

    int median = findMedian(matrix, R, C);
    printf("Median of the matrix: %d\n", median);

    return 0;
}
