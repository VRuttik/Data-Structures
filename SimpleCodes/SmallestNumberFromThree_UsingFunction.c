/*
9. Write a program to find the smallest of three numbers using function.
*/

#include<stdio.h>


int smallest(int n1, int n2, int n3){

  if(n1 < n2 && n1 < n3){
    return n1;
  }else if (n2 < n1 && n2 < n3){
    return n2;
  }
  else{
    return n3;
  }

  return 0;
}

int main(){

  int n1, n2, n3;
  int result;

  printf("\n Enter the first number: ");
  scanf("%d", &n1);
  
  printf("\n Enter the second number: ");
  scanf("%d", &n2);

  printf("\n Enter the third number: ");
  scanf("%d", &n3);

  result = smallest(n1, n2, n3);

  printf("\n Smallest number is: %d", result);

  return 0;
}
