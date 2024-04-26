#include<stdio.h>
#include<string.h>

int main(){

    char str[200], pattern[20], new_str[200], rep_pattern[100];
    int i=0,j=0,k,n=0, copy_loop = 0, repo_index = 0;

    printf("\n Enter the string: ");
    scanf("%[^\n]%*c", str);

    printf("\n Enter the pattern to be replaced: ");
    scanf("%[^\n]%*c", pattern);

    printf("\n Enter the replacing pattern: ");
    scanf("%[^\n]%*c", rep_pattern);

    while(str[i] != '\0'){
        j=0, k=i;

        while(str[k] == pattern[j] && pattern[j] != '\0'){
            k++;
            j++;
        }

        if(pattern[j] == '\0'){
            copy_loop = k;
            while(rep_pattern[repo_index] != '\0'){
                new_str[n] = rep_pattern[repo_index];
                repo_index++;
                n++;
            }
        }

        new_str[n] = str[copy_loop];
        i++;
        copy_loop++;
        n++;
    }

    new_str[n] = '\0';
    printf("\n The new string is: %s", new_str);

    return 0;
}