/* Author: INDROJIT DHE SHAON
Personal Code: 17
File: sum_of_even_numbers.c */

#include<stdio.h>

int main(){

    int number, sum=0, i;

    printf("Enter the last boundary number: ");
    scanf("%d", &number);

    for(i=2; i<=number; i=i+2){

        sum = sum + i;
    }

    printf("The result is %d", sum);

    return 0;
}
