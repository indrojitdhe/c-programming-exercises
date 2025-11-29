/* Author: INDROJIT DHE SHAON
Personal Code: 17
File: bitwise_operations.c */

#include<stdio.h>

int main(){

    int number1, number2, and, or, xor;

    printf("Enter integer number 1: ");
    scanf("%d", &number1);

    printf("Enter integer number 2: ");
    scanf("%d", &number2);

    and = number1&number2;
    or = number1|number2;
    xor = number1^number2;

    printf("%d&%d = %d\n", number1, number2, and);
    printf("%d&%d = %d\n", number1, number2, or);
    printf("%d&%d = %d", number1, number2, xor);

    return 0;
}