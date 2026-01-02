/* Author: INDROJIT DHE SHAON
Personal Code: 17
File: fibonacci_using_recursion.c */

#include<stdio.h>

int fib(int n); /* Function Prototype */

int main(){

    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("The result is %d", fib(number));

    return 0;
}

/* Function Definition */
int fib(int n){

    if(n == 1 || n == 0){

        if(n == 1){

            return 1;
        }

        if(n == 0){

            return 0;
        }
    }
    
    int fibNum1 = fib(n-1);
    int fibNum2 = fib(n-2);

    int fibNum = fibNum1 + fibNum2;

    return fibNum;

}