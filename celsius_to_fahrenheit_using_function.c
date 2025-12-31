/* Author: INDROJIT DHE SHAON
Personal Code: 17
File: celsius_to_fahrenheit_using_function.c */

#include<stdio.h>

float convertFahrenheit(float celsius); /* Function Prototype */

int main(){

    float celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = convertFahrenheit(celsius);

    printf("Fahrenheit = %.2f", fahrenheit);

    return 0;
}

/* Function Definition */

float convertFahrenheit(float celsius){

    return (celsius * 1.8) + 32;
}