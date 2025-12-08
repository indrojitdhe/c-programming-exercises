/* Author: INDROJIT DHE SHAON
Personal Code: 17
File: sum_of_digits.c */

#include<stdio.h>

int main(){

    int number, temp, rem;

    printf("Enter your Number: ");
    scanf("%d", &number);

    int sum = 0;
    temp = number;

    while(temp!=0){

        rem = temp%10;
        sum = sum + rem;
        temp = temp/10;
    }

    printf("Sum of Digits = %d", sum);

    return 0;
}
