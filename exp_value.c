/* Author: INDROJIT DHE SHAON
Personal Code: 17
File: exp_value.c */

#include<stdio.h>
#include<math.h>

int main(){

    double number, result;

    printf("Enter a number: ");
    scanf("%lf", &number);

    result = exp(number);

    printf("exp(%.2lf) = %.2lf", number, result);

    return 0;
}