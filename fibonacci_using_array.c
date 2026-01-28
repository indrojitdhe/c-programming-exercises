/* Author: INDROJIT DHE SHAON
Personal Code: 17
File: fibonacci_using_array.c */

#include<stdio.h>

int main(){

    int n;
    
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int fib[n];

    fib[0] = 0;
    fib[1] = 1;

    printf("0 1 ");

    for(int i=2; i<n; i++){

        fib[i] = fib[i-1] + fib[i-2];
        printf("%d ", fib[i]);
    }

    return 0;
}



