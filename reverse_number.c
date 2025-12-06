/* Author: INDROJIT DHE SHAON
Personal Code: 17
File: reverse_number.c */

#include<stdio.h>

int main(){

    int number, temp, rem;

    printf("Enter your Number: ");
    scanf("%d", &number);

    int sum = 0;
    temp = number;

    while(temp!=0){

        rem = temp%10;
        sum = sum*10 + rem;
        temp = temp/10;
    }

    printf("Main Number = %d & Reverse Number = %d", number, sum);

    return 0;
}
