/*
H
H E
H E L
H E L L
H E L L O
H E L L O 
H E L L
H E L
H E 
H 
*/

#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    int p;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("\n");

    int len = strlen(str);

    for(int i = 0; i < len; i++){
        for(int j = 0; j <= i; j++) {
            printf("%c ", str[j]);
        }
        printf("\n");
    }

    for(int i = len - 1; i > 0; i--){
        for(int j = 0; j < i; j++) {
            printf("%c ", str[j]);
        }
        printf("\n");
    }

    return 0;
}
