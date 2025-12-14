/* Author: INDROJIT DHE SHAON
Personal Code: 17
File: power_of_number.c */

#include<stdio.h>
#include<math.h>

int main(){

    double base, exponent, result;

    printf("Enter base: ");
    scanf("%lf", &base);

    printf("Enter exponent: ");
    scanf("%lf", &exponent);

    result = pow(base, exponent);

    printf("The power is %.2lf", result);

    return 0;
}