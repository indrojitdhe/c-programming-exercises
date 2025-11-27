/* Author: INDROJIT DHE SHAON
Personal Code: 17
File: lowercase_to_uppercase.c */

#include<stdio.h>

int main(){

    char lower;

    printf("Enter a lowercase letter: ");
    scanf("%c", &lower);

    printf("Uppercase = %c", lower-32);

    return 0;
}