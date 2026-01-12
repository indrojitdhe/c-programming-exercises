/* Author: INDROJIT DHE SHAON
Personal Code: 17
File: sum_of_harmonic_series.c */

#include<stdio.h>

int main(){

    int i, n;
    float sum=0;

    printf("Enter the last number of series: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++){

        sum = sum + (1.0/i);

        if(i==1){

            printf("\n1 + ");
        }
        else if(i==n){

            printf("(1/%d) = " ,i);
        }
        else{

            printf("(1/%d) + ",i);
        }
    }

    printf("%.2lf", sum);

    return 0;
}
