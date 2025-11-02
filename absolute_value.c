/* Author: INDROJIT DHE SHAON
Personal Code: 17
File: absolute_value.c */

#include<stdio.h>
#include<math.h>

int main(){

    double number, absoluteValue;

    printf("Enter any number: ");
    scanf("%lf", &number);

    absoluteValue = fabs(number);

    printf("The absolute values of %.2lf is %.2lf", number, absoluteValue);

    return 0;
}