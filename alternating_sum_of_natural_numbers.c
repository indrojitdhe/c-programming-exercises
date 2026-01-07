/* Author: INDROJIT DHE SHAON
Personal Code: 17
File: alternating_sum_of_natural_numbers.c */

#include<stdio.h>


int main(){

    int n, even=0, odd=0, i;

    printf("Enter the last number of series: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++){

        if(i%2==0){

            even = even + i;
        }
        else{

            odd = odd + i;
        }
    }

    printf("Sum = %d", odd-even);

    return 0;
}
