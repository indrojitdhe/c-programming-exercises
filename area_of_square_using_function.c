/* Author: INDROJIT DHE SHAON
Personal Code: 17
File: area_of_square_using_function.c */

#include<stdio.h>

float squareArea(float a); /* Function Prototype */

int main(){

    float side;

    printf("Enter the Side: ");
    scanf("%f", &side);


    printf("Area of Square = %.2f", squareArea(side)); /* Function Call & Display*/

    return 0;
}

float squareArea(float a){        /* Function Definition */

    return a*a;
}