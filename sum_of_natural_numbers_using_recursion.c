/* Author: INDROJIT DHE SHAON
Personal Code: 17
File: sum_of_natural_numbers_using_recursion.c */

#include<stdio.h>

int sumNatural(int n);

int main(){

    int number;
    
    printf("Inter a integer number: ");
    scanf("%d", &number);    
    
    printf("The result is %d", sumNatural(number));

    return 0;
}

/* Recursive Function*/
int sumNatural(int n){        

    if(n == 1){

        return 1;
    }

    int sum = sumNatural(n-1);
    int total = sum + n;
    
    return total;
}