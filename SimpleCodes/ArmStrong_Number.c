/*
15. Write a program to read numbers until -1 is entered and display whether the
number is an Armstrong number or not.
*/

#include <math.h>
#include <stdio.h>

// Function to calculate the number of digits in a number
int countDigits(int num) {
  int count = 0;
  while (num != 0) {
    num /= 10;
    count++;
  }
  return count;
}

// Function to check if a number is an Armstrong number
int isArmstrong(int num) {
  int originalNum, remainder, digits, sum = 0;

  originalNum = num;
  digits = countDigits(num);

  while (originalNum != 0) {
    remainder = originalNum % 10;
    sum += pow(remainder, digits);
    originalNum /= 10;
  }

  return (sum == num);
}

int main() {
  int num;

  do {
    printf("Enter a number (-1 to exit): ");
    scanf("%d", &num);

    if (num != -1) {
      if (isArmstrong(num)) {
        printf("%d is an Armstrong number.\n", num);
      } else {
        printf("%d is not an Armstrong number.\n", num);
      }
    }
  } while (num != -1);

  printf("Exiting the program.\n");

  return 0;
}
