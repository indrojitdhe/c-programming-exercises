/* Author: INDROJIT DHE SHAON
Personal Code: 17
File: area_of_rectangle.c */

#include<stdio.h>

int main(){

    float length, width, area;

    printf("Enter the Length: ");
    scanf("%f", &length);

    printf("Enter the Width: ");
    scanf("%f", &width);

    area = length*width;

    printf("Area of Rectangle = %.2f", area);

    return 0;
}