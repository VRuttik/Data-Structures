#include<stdio.h>
#include<string.h>

int main(){

    char str[100], substr[100];
    int i=0, j=0, n, m;

    printf("\n Enter the main string: ");
    scanf("%[^\n]%*c", str);

    printf("\n Enter the position from which to start the substring: ");
    scanf("%d", &m);

    printf("\n Enter the length of the string: ");
    scanf("%d", &n);

    i=m;

    while(str[i] != '\0' && n > 0){
        substr[j] = str[i];
        i++;
        j++;
        n--;
    }

    substr[i] = '\0';
    printf("\n The substring is: %s", substr);
    
    return 0;
}