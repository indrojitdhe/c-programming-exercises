/* Author: INDROJIT DHE SHAON
Personal Code: 17
File: check_alphabet_case.c */

#include<stdio.h>

int main(){

    char letter;

    printf("Enter a letter: ");
    scanf("%c", &letter);

    if(letter>='A' && letter<='Z'){

        printf("Capital Letter");
    }
    else if(letter>='a' && letter<='z'){

        printf("Small Letter");
    }
    else{

        printf("Not a valid letter");
    }

    return 0;
}