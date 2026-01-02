/* Author: INDROJIT DHE SHAON
Personal Code: 17
File: find_factorial_using_recursion.c */

#include<stdio.h>

int factorial(int n);

int main(){

    int number;
    
    printf("Enter a integer number: ");
    scanf("%d", &number);    
    
    printf("The result is %d", factorial(number));

    return 0;
}

/* Recursive Function*/
int factorial(int n){        

    if(n == 0){

        return 1;
    }

    int fact = factorial(n-1);
    int total = fact*n;
    
    return total;
}