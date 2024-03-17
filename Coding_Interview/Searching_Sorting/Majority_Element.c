#include<stdio.h>

int findMajorityElement(int Arr[], int N){

    int candidate = -1, count = 0;

    // Find potential candidate for majority element
    for(int i=0;i<N;i++){
        if(count == 0){
            candidate = Arr[i];
            count = 1;
        }else if(Arr[i] == candidate){
            count++;
        }else{
            count--;
        }
    }

    // Verify if the candidate is the majority element
    count = 0;
    for(int i=0;i<N;i++){
        if(Arr[i] == candidate){
            count++;
        }
    }

    if (count > N/2){
        return candidate;
    }
    else{
        return -1;
    }
    
}

int main(){

    int N;
    printf("Enter the number of elements: ");
    scanf("%d", &N);

    int Arr[N];

    printf("Enter the elelemnts of the array: ");
    for(int i=0;i<N;i++){
        scanf("%d", &Arr[i]);
    }

    int majorityElement = findMajorityElement(Arr, N);

    if(majorityElement != -1){
        printf("Majority element is: %d\n", majorityElement);
    }
    else{
        printf("There is no majority element in the array.\n");
    }

    return 0;
}