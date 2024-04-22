#include<stdio.h>

int findMajorityElement(int arr[], int N);

int main(){

    int N;
    printf("Enter the size of the array: ");
    scanf("%d", &N);

    int arr[N];
    printf("Enter the elements of the array: ");
    for(int i=0;i<N;i++){
        scanf("%d", &arr[i]);
    }

    int majorityElement = findMajorityElement(arr, N);

    if(majorityElement != -1){
        printf("Majority element is: %d\n", majorityElement);
    }
    else{
        printf("There is no majority element in the array.\n");
    }

    return 0;
}

int findMajorityElement(int arr[], int N){
    int candidate = -1, count = 0;

    for(int i=0;i<N;i++){
        if(count == 0){
            candidate = arr[i];
            count = 1;
        }else if(arr[i] == candidate){
            count++;
        }
        else{
            count--;
        }
    }

    // Verify Element
    count = 0;
    for(int i=0;i<N;i++){
        if(arr[i] == candidate){
            count++;
        }
    }

    if(count > N/2){
        return candidate;
    }
    else{
        return -1;
    }
}