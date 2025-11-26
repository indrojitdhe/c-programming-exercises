/* Author: INDROJIT DHE SHAON
Personal Code: 17
File: find_factorial.c */

#include<stdio.h>

int main(){

    int number;

    printf("Enter any number: ");
    scanf("%d", &number);

    int fact=1;

    for(int i=1; i<=number; i=i+1){
        
        fact = fact*i;
    }

    printf("Factorial = %d", fact);

    return 0;
}