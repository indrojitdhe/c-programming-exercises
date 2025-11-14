/* Author: INDROJIT DHE SHAON
Personal Code: 17
File: check_pass_fail.c */

#include<stdio.h>

int main(){

    int mark;

    printf("Enter your mark: ");
    scanf("%d", &mark);

    if(100>=mark && mark>=33){

        printf("PASS");
    }
    else if(33>mark && mark>=0){

        printf("FAIL");
    }
    else{

        printf("Invalid Number");
    }

    return 0;
}