/* Author: INDROJIT DHE SHAON
Personal Code: 17
File: subtract_two_numbers.c */

#include<stdio.h>

int main(){

    float number1, number2, sub;

    printf("Enter Number 1: ");
    scanf("%f", &number1);

    printf("Enter Number 2: ");
    scanf("%f", &number2);

    sub = number1 - number2;

    printf("Result = %.2f", sub);

    return 0;
}