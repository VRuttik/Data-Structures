/*
12. Write a program to add three floating point numbers. The result should be contain only two digits after the decimal point.
*/

#include<stdio.h>

int main(){

  float n1, n2, n3, sum;

  printf("\n Enter the first floating point number: ");
  scanf("%f", &n1);

  printf("\n Enter the second floating point number: ");
  scanf("%f", &n2);

  printf("\n Enter the third floating point number: ");
  scanf("%f", &n3);

  sum = n1 + n2 + n3;

  printf("\n Sum: %.2f", sum);

  return 0;
}
