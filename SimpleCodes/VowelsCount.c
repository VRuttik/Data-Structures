/*
3. Write a program to count the number of vovels in a text.
*/

#include <stdio.h>

int main() {

  char str[100];

  printf("\n Enter the text: ");
  scanf("%[^\n]s", str);

  int count = 0;

  for (int i = 0; i < strlen(str); i++) {
    if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' ||
        str[i] == 'U' || str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
        str[i] == 'o' || str[i] == 'u'){
        
        count++;
        }
  }

    printf("\n Count: %d", count);

    return 0;
}
