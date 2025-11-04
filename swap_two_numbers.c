/* Author: INDROJIT DHE SHAON
Personal Code: 17
File: swap_two_numbers.c */

#include<stdio.h>

int main(){

    float num1, num2, temp;

    printf("Enter Number 1: ");
    scanf("%f", &num1);

    printf("Enter Number 2: ");
    scanf("%f", &num2);

    printf("Before Swapping,\n");
    printf("Number 1 = %.2f & Number 2 = %.2f", num1, num2);

    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("\nAfter Swapping,\n");
    printf("Number 1 = %.2f & Number 2 = %.2f", num1, num2);

    return 0;
}