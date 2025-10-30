/* Author: INDROJIT DHE SHAON
Personal Code: 17
File: multiply_two_numbers.c */

#include<stdio.h>

int main(){

    float number1, number2, mul;

    printf("Enter Number 1: ");
    scanf("%f", &number1);

    printf("Enter Number 2: ");
    scanf("%f", &number2);

    mul = number1 * number2;

    printf("Multiplication = %.2f", mul);

    return 0;
}