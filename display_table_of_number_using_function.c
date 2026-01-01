/* Author: INDROJIT DHE SHAON
Personal Code: 17
File: display_table_of_number_using_function.c */

#include<stdio.h>

void displayTable(); /* Function Prototype*/

int main(){

    int number;

    printf("Enter a Number: ");
    scanf("%d", &number);

    displayTable(number); /* Function Call*/

    return 0;
}

/* Function Definition*/

void displayTable(int n){                  

    for(int i=1; i<=10; i++){ 
        printf("%d * %d = %d\n", n, i, n*i);
    }

}

