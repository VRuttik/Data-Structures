/*
22. Write a program to count the total number of occurrences of a given character in the string.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {

    char str[100], ch;
    int i, count = 0;

     printf("\nEnter the string: ");
     scanf("%[^\n]s", str);
     getchar();

     printf("\nEnter the character to be searched: ");
     scanf("%c", &ch);

     for(i=0;i<strlen(str);i++){

       if(str[i] == ch){
         count++;
       }
     }

     printf("\nThe character '%c' occurs %d times in the string.", ch, count);

    return 0;
}
