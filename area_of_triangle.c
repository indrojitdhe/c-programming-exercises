/* Author: INDROJIT DHE SHAON
Personal Code: 17
File: area_of_triangle.c */

#include<stdio.h>

int main(){

    float base, height, area;

    printf("Enter the Base: ");
    scanf("%f", &base);

    printf("Enter the Height: ");
    scanf("%f", &height);

    area = 0.5*base*height;

    printf("The area is %.2f", area);

    return 0;
}