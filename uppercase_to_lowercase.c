/* Author: INDROJIT DHE SHAON
Personal Code: 17
File: uppercase_to_lowercase.c */

#include<stdio.h>

int main(){

    char upper;

    printf("Enter an uppercase letter: ");
    scanf("%c", &upper);

    printf("Lowercase = %c", upper+32);

    return 0;
}