/*
20. Write a program in C that replaces a given character with another character in a string.
*/

#include <stdio.h>
#include <string.h>


int main() {

    char str[100], ch1, ch2;
    int i;

     printf("\nEnter the string: ");
     scanf("%[^\n]s", str);

      getchar();

     printf("\n Enter the character to be replaced: ");
     scanf("%c", &ch1);

     getchar();

     printf("\nEnter the character to be replaced with: ");
     scanf("%c", &ch2);

     for(i=0;i<strlen(str);i++){

       if(str[i]==ch1){
         str[i]=ch2;
       }
     }

     printf("\nThe string after replacing %c with %c is: %s", ch1, ch2, str);
     
   
    return 0;
}
