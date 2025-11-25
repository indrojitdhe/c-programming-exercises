/* Author: INDROJIT DHE SHAON
Personal Code: 17
File: check_prime_number.c */

#include<stdio.h>
#include<math.h>
#include<ctype.h>

int main(){

    int number, count=0;

    printf("Enter any number: ");
    scanf("%d", &number);
    
    if(number<=1){

        count++;
    }
    else{

        for(int i=2; i<=sqrt(number); i++){

            if(i%2 == 0){

                count++;
                break;
            }
        }
    }

    if(count==0){

        printf("%d is a prime number.", number);
    }
    else{

        printf("%d is not a prime number.", number);
    }


    return 0;
}