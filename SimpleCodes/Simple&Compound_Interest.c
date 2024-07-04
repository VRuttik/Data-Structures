/*
5. Write a program to calculate the simple interest and compound interest for the given principle, rate and time.
*/

#include <stdio.h>
#include <math.h>

int main() {
    float p, t, r, si, ci;

    printf("\nEnter the principle amount: ");
    scanf("%f", &p);

    printf("\nEnter the time (years): ");
    scanf("%f", &t);

    printf("\nEnter the rate (%): ");
    scanf("%f", &r);

    si = (p * t * r) / 100;

    ci = p * pow((1 + r / 100), t) - p;

    printf("\nSimple interest is: %.2f\n", si);
    printf("\nCompound interest is: %.2f\n", ci);

    return 0;
}
