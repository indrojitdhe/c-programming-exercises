/* Author: INDROJIT DHE SHAON
Personal Code: 17
File: check_grade.c */

#include<stdio.h>

int main(){

    int mark;

    printf("Enter your mark: ");
    scanf("%d", &mark);

    if(100>=mark && mark>=90){

        printf("A+");
    }
    else if(90>mark && mark>=80){

        printf("A");
    }
    else if(80>mark && mark>=70){

        printf("B+");
    }
    else if(70>mark && mark>=60){

        printf("B");
    }
    else if(60>mark && mark>=50){

        printf("C");
    }
    else if(50>mark && mark>=40){

        printf("D");
    }
    else if(40>mark && mark>=33){

        printf("E");
    }
    else if(33>mark && mark>=0){

        printf("FAIL");
    }
    else{

        printf("Invalid Number");
    }

    return 0;
}