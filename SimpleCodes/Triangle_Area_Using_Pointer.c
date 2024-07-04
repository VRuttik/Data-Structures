/*
13. Write a program to calculate area of triangle using pointers.
*/

#include <stdio.h>

int main() {
    float base, height, area;
    float *base_ptr, *height_ptr, *area_ptr;

    base_ptr = &base;
    height_ptr = &height;
    area_ptr = &area;

    printf("Enter the base of the triangle: ");
    scanf("%f", base_ptr);

    printf("Enter the height of the triangle: ");
    scanf("%f", height_ptr);

    *area_ptr = (*base_ptr * *height_ptr) / 2.0;

    printf("Area of the triangle is: %f\n", *area_ptr);

    return 0;
}
