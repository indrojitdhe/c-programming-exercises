/* Author: INDROJIT DHE SHAON
Personal Code: 17
File: check_leap_year.c */

#include<stdio.h>

int main(){

    int year;

    printf("Enter year: ");
    scanf("%d", &year);

    if(year%400 == 0){

        printf("Leap Year");
    }
    else if(year%4 == 0 && year%100 != 0){

        printf("Leap Year");
    }
    else{

        printf("Not a Leap Year");
    }

    return 0;
}