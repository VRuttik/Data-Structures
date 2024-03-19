#include<stdio.h>

#define MAX_SIZE 100

void sort_matrix(int mat[MAX_SIZE][MAX_SIZE], int N){

    int temp[N*N]; // Temporary array to store matrix elements
    int k=0; // Index for temporary array

    // Copy matrix elements to teporary array
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            temp[k++] = mat[i][j];
        }
    }

    // Sort the temporary array
    for(int i=0;i<N*N-1;i++){
        for(int j=0;j<N*N-i-1;j++){

            if(temp[j] > temp[j+1]){
                int temp_val = temp[j];
                temp[j] = temp[j+1];
                temp[j+1] = temp_val;
            }
        }
    }

    // Copy sorted elements back to matrix
    k=0;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            mat[i][j] = temp[k++];
        }
    }
}

int main(){

    int N;
    printf("Enter the size of the matrix: ");
    scanf("%d", &N);

    int mat[MAX_SIZE][MAX_SIZE];

    printf("Enter the elements of the matrix: \n");
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            scanf("%d", &mat[i][j]);
        }
    }

    // Sort the matrix

    sort_matrix(mat, N);

    printf("Sorted matrix:\n");
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}