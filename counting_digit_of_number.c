/* Author: INDROJIT DHE SHAON
Personal Code: 17
File: counting_digit_of_number.c */

#include<stdio.h>

int main(){

    int number, temp, rem;

    printf("Enter your Number: ");
    scanf("%d", &number);

    int count = 0;
    temp = number;

    while(temp!=0){

        temp = temp/10;
        ++count;
    }

    printf("Total Digits: %d", count);
    
    return 0;
}
