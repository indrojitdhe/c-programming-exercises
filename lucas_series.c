/* Author: INDROJIT DHE SHAON
Personal Code: 17
File: lucas_series.c */

#include<stdio.h>


int main(){

    int n, first=2, second=1, next, count=0, i;

    printf("Enter the range of lucas series: ");
    scanf("%d", &n);

    while(count<n){

        if(count==0){

            next = 2;
        }
        else if(count==1){

            next = 1;
        }
        else{

            next = first + second;
            first = second;
            second = next;
        }
        count++;

        printf("%d ", next);
    }

    return 0;
}
