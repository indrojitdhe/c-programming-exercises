/* Author: INDROJIT DHE SHAON
Personal Code: 17
File: armstrong_number.c */

#include<stdio.h>

int main(){

    int number, temp, rem;

    printf("Enter your Number: ");
    scanf("%d", &number);

    int sum = 0;
    temp = number;

    while(temp!=0){

        rem = temp%10;
        sum = sum + rem*rem*rem;
        temp = temp/10;
    }

    if(sum==number){

        printf("Armstrong");
    }
    else{

        printf("Not Armstrong");
    }
    
    return 0;
}
