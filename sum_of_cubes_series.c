/* Author: INDROJIT DHE SHAON
Personal Code: 17
File: sum_of_cubes_series.c */

#include<stdio.h>


int main(){

    int n, sum=0, i;

    printf("Enter the last number of series: ");
    scanf("%d", &n);

    printf("1^3 + 2^3 + 3^3 + ........ + %d^3 = ", n);

    for(i=1; i<=n; i++){

        sum = sum + i*i*i;
    }

    printf("%d", sum);

    return 0;
}
