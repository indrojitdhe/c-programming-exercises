/* Author: INDROJIT DHE SHAON
Personal Code: 17
File: multiplication_table.c */

#include<stdio.h>

int main(){

    int number;

    printf("Enter any number: ");
    scanf("%d", &number);

    for(int i=1; i<=10; i=i+1){

        printf("%d x %d = %d\n", number, i, number*i);
    }  

    return 0;
}