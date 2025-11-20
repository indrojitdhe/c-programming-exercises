/* Author: INDROJIT DHE SHAON
Personal Code: 17
File: tan_degree_value.c */

#include<stdio.h>
#include<math.h>

int main(){

    double number, result;

    printf("Enter a number: ");
    scanf("%lf", &number);

    result = tan(number);

    printf("tan(%.2lf) = %.2lf", number, result);

    return 0;
}