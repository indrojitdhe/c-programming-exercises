/* Author: INDROJIT DHE SHAON
Personal Code: 17
File: divide_two_numbers.c */

#include<stdio.h>

int main(){

    float number1, number2, div;

    printf("Enter Number 1: ");
    scanf("%f", &number1);

    printf("Enter Number 2: ");
    scanf("%f", &number2);

    div = number1 / number2;

    printf("Division = %.2f", div);

    return 0;
}