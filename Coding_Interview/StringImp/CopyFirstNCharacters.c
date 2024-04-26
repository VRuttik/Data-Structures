#include<stdio.h>
#include<string.h>

int main(){

    char str[100], substr[100];
    int i=0, n;

    printf("\n Enter the string: ");
    scanf("%[^\n]%*c", str);

    printf("\n Enter the number of characters to copied: ");
    scanf("%d", &n);

    i=0;

    while(str[i] != '\0' && i < n){
        substr[i] = str[i];
        i++;
    }

    substr[i] = "\0";
    printf("\n The substring is: %s", substr);

    return 0;
}