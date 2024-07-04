/*
4. Write a program to read two floating numbers. Add these two numbers and assign the result to an integer variable. Finally, display the value of all the three variables.
*/

#include<stdio.h>

int main(){

  float n1, n2, Sum=0.0;
  int Sum2 = 0;
  
  printf("\n Enter the first floating number: ");
  scanf("%f", &n1);

  printf("\n Enter the second floating number: ");
  scanf("%f", &n2);

  Sum = n1 + n2;

  Sum2 = (int)Sum;

  printf("\n First floating number: %f\n", n1);
  printf("\n Second floating number: %f\n", n2);
  printf("\n Sum: %d", Sum2);

  return 0;
}
