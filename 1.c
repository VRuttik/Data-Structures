// Write a program to read 10 integers. Display these numbers by printitng three numbers in a line separated by commas.

#include<stdio.h>

int main(){
    
    int n=10, arr[10];
    
    printf("\n***Enter 10 integers***\n");
    for(int i=0;i<n;i++){
        printf("\narr[%d]= ", i+1);
        scanf("%d", &arr[i]);
    }
    
    printf("\n***Numbers in group of three***\n");
    for(int i=0;i<n;i++){
        printf("\t%d", arr[i]);
        
        if((i + 1) % 3 != 0 && i < 9){
            printf(",");
        }else{
            printf("\n");
        }
    }
    
    return 0;
}
