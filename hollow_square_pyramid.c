/* Author: INDROJIT DHE SHAON
Personal Code: 17
File: hollow_square_pyramid.c */

#include<stdio.h>

int main(){

    int row, col, range;

    printf("Enter Range: ");
    scanf("%d", &range);

    printf("\nHollow Square Pyramid:\n");

    for(row=1; row<=range; row++){

        for(col=1; col<=range; col++){

            if(row == 1 || row == range || col == 1 || col == range){

                printf("* ");
            }
            else{

                printf("  ");
            }

        }

        printf("\n");
    }

    return 0;
}