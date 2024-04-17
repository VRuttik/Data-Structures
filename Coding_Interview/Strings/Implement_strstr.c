#include<stdio.h>

int customStrStr(char *s, char *x){
    int i, j;

    for(i=0; s[i] != '\0'; i++){
        j = 0;

        while (x[j] != '\0' && s[i + j] == x[j])
            j++;
        if(x[j] == '\0')
            return i;
    }

    return -1;
}

int main(){

    char s[100], x[100];

    printf("Enter the string s: ");
    scanf("%s", s);

    printf("Enter the string x: ");
    scanf("%s", x);

    int result = customStrStr(s, x);

    printf("Output: %d\n", result);

    return 0;
}