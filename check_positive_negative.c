/* Author: INDROJIT DHE SHAON
Personal Code: 17
File: check_positive_negative.c */

#include<stdio.h>

int main(){

    float number;

    printf("Enter any number: ");
    scanf("%f", &number);

    if(number>0){

        printf("The number is positive.");
    }
    else if(number<0){

        printf("The number is negative.");
    }
    else{

        printf("The number is equal to zero.");
    }

    return 0;
}