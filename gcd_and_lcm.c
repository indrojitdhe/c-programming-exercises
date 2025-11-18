/* Author: INDROJIT DHE SHAON
Personal Code: 17
File: gcd_and_lcm.c */

#include<stdio.h>

int main(){

    int number1, number2, num1, num2, gcd, lcm, rem;

    printf("Enter Number 1: ");
    scanf("%d", &number1);

    printf("Enter Number 2: ");
    scanf("%d", &number2);

    num1 = number1;
    num2 = number2;

    while(num2!=0){

        rem = num1%num2;
        num1 = num2;
        num2 = rem;
    }

    gcd = num1;
    lcm = (number1*number2)/gcd;

    printf("GCD = %d\n", gcd);
    printf("LCM = %d", lcm);

    return 0;
}
