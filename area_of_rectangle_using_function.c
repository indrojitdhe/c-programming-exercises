/* Author: INDROJIT DHE SHAON
Personal Code: 17
File: area_of_rectangle_using_function.c */

#include<stdio.h>

float rectangleArea(float a, float b); /* Function Prototype */

int main(){

    float length, width;

    printf("Enter the Lenth: ");
    scanf("%f", &length);

    printf("Enter the Width: ");
    scanf("%f", &width);


    printf("Area of Rectangle = %.2f", rectangleArea(length, width)); /* Function Call & Display*/

    return 0;
}

float rectangleArea(float a, float b){        /* Function Definition */

    return a*b;
}