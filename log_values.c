/* Author: INDROJIT DHE SHAON
Personal Code: 17
File: log_values.c */

#include<stdio.h>
#include<math.h>

int main(){

    double number, result1, result2;

    printf("Enter a number: ");
    scanf("%lf", &number);

    result1 = log(number);
    result2 = log10(number);

    printf("log(%.2lf) = %.2lf & log10(%.2lf) = %.2lf", number, result1, number, result2);

    return 0;
}