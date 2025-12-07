/* Author: INDROJIT DHE SHAON
Personal Code: 17
File: celsius_to_fahrenheit.c */

#include<stdio.h>

int main(){

    float celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 1.8) + 32;

    printf("Fahrenheit = %.2f", fahrenheit);

    return 0;
}