/*
6. Write a program to read the address of a user. Display the result b breaking
it in multiple lines.
*/

#include <stdio.h>

int main() {
  char street[100], city[50], state[50], zipcode[10];

  printf("Enter your street address: ");
  scanf(" %[^\n]", street); 

  printf("Enter your city: ");
  scanf(" %[^\n]", city);

  printf("Enter your state: ");
  scanf(" %[^\n]", state);

  printf("Enter your ZIP code: ");
  scanf(" %[^\n]", zipcode);

  printf("\nAddress:\n");
  printf("%s\n", street);
  printf("%s\n", city);
  printf("%s\n", state);
  printf("%s\n", zipcode);

  return 0;
}
