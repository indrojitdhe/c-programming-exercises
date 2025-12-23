/* Author: INDROJIT DHE SHAON
Personal Code: 17
File: check_large_number_using_ternary_operator.c */

#include<stdio.h>

int main(){

    float number1, number2, large;
    
    printf("Don't give the same number.\n");
    printf("Enter Number 1: ");
    scanf("%f", &number1);

    printf("Enter Number 2: ");
    scanf("%f", &number2);
    
    large = number1>number2 ? number1 : number2;

    printf("The large number is %.2f", large);

    return 0;
}

