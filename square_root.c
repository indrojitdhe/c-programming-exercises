/* Author: INDROJIT DHE SHAON
Personal Code: 17
File: square_root.c */

#include<stdio.h>
#include<math.h>

int main(){

    double number, squareRoot;

    printf("Enter any positive number: ");
    scanf("%lf", &number);

    if(number<0){

        printf("This is not a positive number.");
    }
    else{

        squareRoot = sqrt(number);

        printf("Square Root = %.2lf", squareRoot);
    }


    return 0;
}