/* Author: INDROJIT DHE SHAON
Personal Code: 17
File: add_two_numbers.c */

#include<stdio.h>

int main(){

    float number1, number2, sum;

    printf("Enter Number 1: ");
    scanf("%f", &number1);

    printf("Enter Number 2: ");
    scanf("%f", &number2);

    sum = number1 + number2;

    printf("Sum = %.2f", sum);

    return 0;
}