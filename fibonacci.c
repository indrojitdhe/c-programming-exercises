/* Author: INDROJIT DHE SHAON
Personal Code: 17
File: fibonacci.c */

#include<stdio.h>


int main(){

    int n, first=0, second=1, fibo, count=0, i;

    printf("Enter the last number of fibonacci: ");
    scanf("%d", &n);

    while(count<n){

        if(count<=1){

            fibo = count;
        }
        else{

            fibo = first + second;
            first = second;
            second = fibo;
        }
        count++;

        printf("%d ", fibo);
    }

    return 0;
}
