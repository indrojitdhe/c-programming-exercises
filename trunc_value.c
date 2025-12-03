/* Author: INDROJIT DHE SHAON
Personal Code: 17
File: trunc_value.c */

#include<stdio.h>
#include<math.h>

int main(){

    double number, result;

    printf("Enter a number: ");
    scanf("%lf", &number);

    result = trunc(number);

    printf("Result = %.2lf", result);

    return 0;
}