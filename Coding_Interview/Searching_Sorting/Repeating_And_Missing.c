#include<stdio.h>
#include<stdlib.h>

// Function to find missing and repeating numbers
void findMissingAndRepeating(int Arr[], int N){
    
    int repeating = 0, missing = 0;
    int *count = (int *)calloc(N, sizeof(int));

    for(int i=0;i<N;i++){
        count[Arr[i] - 1]++;
        if(count[Arr[i]-1] == 2){
            repeating = Arr[i];
        }
    }

    for(int i=0;i<N;i++){
        if(count[i] == 0){
            missing = i + 1;
            break;
        }
    }

    free(count);
    printf("%d %d\n", repeating, missing);
} 

int main(){

    int N;
    printf("Enter the value of N: ");
    scanf("%d", &N);

    int Arr[N];

    printf("Enter the elements of the array: ");
    for(int i=0;i<N;i++){
        scanf("%d", &Arr[i]);
    }

    findMissingAndRepeating(Arr, N);

    return 0;
}