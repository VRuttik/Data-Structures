#include<stdio.h>

#define N_MAX 100 // Maximum number of rows
#define M_MAX 100 // Maximum number of columns

int find_max_ones_row(int arr[N_MAX][M_MAX], int N, int M){

    int max_ones = 0;
    int max_ones_row = -1;

    for(int i=0;i<N;i++){
        
        int count_ones = 0;

        for(int j=0;j<M;j++){
            if(arr[i][j] == 1){
                count_ones++;
            }
        }

        if(count_ones > max_ones){
            max_ones = count_ones;
            max_ones_row = i;
        }
    }

    return max_ones_row;
}

int main(){

    int N, M;

    printf("Enter the number of rows: ");
    scanf("%d", &N);
    printf("Enter the number of columns: ");
    scanf("%d", &M);

    int arr[N_MAX][M_MAX];
    printf("Enter the array elements row-wise:\n");
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            scanf("%d", &arr[i][j]);
        }
    }

    int result = find_max_ones_row(arr, N, M);
    printf("Output: %d\n", result); // Corrected printf typo from "printd" to "printf"

    return 0;
}