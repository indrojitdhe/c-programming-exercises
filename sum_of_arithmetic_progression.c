/* Author: INDROJIT DHE SHAON
Personal Code: 17
File: sum_of_arithmetic_progression.c */

#include<stdio.h>


int main(){

    int n, sum=0, i;

    printf("Enter the last number of series: ");
    scanf("%d", &n);

    printf("1 + 2 + 3 + ........ + %d = ", n);

    for(i=1; i<=n; i++){

        sum = sum + i;
    }

    printf("%d", sum);

    return 0;
}
