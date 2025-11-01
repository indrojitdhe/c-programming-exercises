/* Author: INDROJIT DHE SHAON
Personal Code: 17
File: area_of_circle.c */

#include<stdio.h>

int main(){

    float radius, pi, area;

    printf("Enter the Radius: ");
    scanf("%f", &radius);

    pi = 3.1416;
    area = pi*radius*radius;

    printf("Area of Circle = %.2f", area);

    return 0;
}