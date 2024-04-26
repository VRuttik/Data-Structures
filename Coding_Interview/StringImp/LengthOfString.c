#include<stdio.h>

int main(){

    char str[100], i=0, length;

    printf("\n Enter the string: ");
    scanf("%[^\n]%*c", str);

    while(str[i] != '\0'){
        i++;
    }

    length = i;

    printf("\n The length of the string are: %d", length);

    return 0;
}
