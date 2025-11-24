/* Author: INDROJIT DHE SHAON
Personal Code: 17
File: check_vowel_consonant.c */

#include<stdio.h>

int main(){

    char letter;

    printf("Enter a letter: ");
    scanf("%c", &letter);

    if(letter=='A' || letter=='E'|| letter=='I' || letter=='O' || letter=='U' || letter=='a' || letter=='e'|| letter=='i' || letter=='o' || letter=='u'){

        printf("Vowel");
    }
    else{

        printf("Consonant");
    }

    return 0;
}