/*
8. Write a program that prints a floating point value in exponential format with the following specification.:
(a) correct to two decimal places;
(b) correct to four decimal places;
(c) correct to eight decimal places;
*/

#include<stdio.h>

int main(){

  float n = 1.2345678;

  printf("(a) : %.2f\n", n);
  printf("(b) : %.4f\n", n);
  printf("(c) : %.8f\n", n);

  return 0;
}
