/* Author: INDROJIT DHE SHAON
Personal Code: 17
File: area_of_circle_using_function.c */

#include<stdio.h>

float circleArea(float r); /* Function Prototype */

int main(){

    float radius;

    printf("Enter the Radius: ");
    scanf("%f", &radius);


    printf("Area of Rectangle = %.2f", circleArea(radius)); /* Function Call & Display*/

    return 0;
}

float circleArea(float r){        /* Function Definition */

    return 3.1416*r*r;
}