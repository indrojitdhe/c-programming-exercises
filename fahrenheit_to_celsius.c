/* Author: INDROJIT DHE SHAON
Personal Code: 17
File: fahrenheit_to_celsius.c */

#include<stdio.h>

int main(){

    float fahrenheit, celsius;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32) / 1.8;

    printf("Celsius = %.2f", celsius);

    return 0;
}