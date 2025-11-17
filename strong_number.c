/* Author: INDROJIT DHE SHAON
Personal Code: 17
File: strong_number.c */

#include<stdio.h>

int main(){

    int number, temp, rem;

    printf("Enter your Number: ");
    scanf("%d", &number);

    int sum = 0;
    temp = number;

    while(temp!=0){

        rem = temp%10;

        int fact=1;

        for(int i=1; i<=rem; i++){

            fact = fact*i;
        }

        sum = sum + fact;
        temp = temp/10;
        
    }

    if(sum==number){

        printf("Strong Number");
    }
    else{

        printf("Not Strong");
    }
    
    return 0;
}
