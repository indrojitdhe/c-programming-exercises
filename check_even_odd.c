/* Author: INDROJIT DHE SHAON
Personal Code: 17
File: check_even_odd.c */

#include<stdio.h>

int main(){

    int number;

    printf("Enter any number: ");
    scanf("%d", &number);

    if(number%2 == 0){

        printf("The number is even");
    }
    else{

        printf("The number is odd");
    }

    return 0;
}