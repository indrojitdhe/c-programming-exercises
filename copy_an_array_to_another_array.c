/* Author: INDROJIT DHE SHAON
Personal Code: 17
File: copy_an_array_to_another_array.c */

#include<stdio.h>

int main(){

    int n;
    
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr1[n];
    int arr2[n];

    /*Taking Input*/
    for(int i=0; i<n; i++){

        printf("Index [%d]: ", i);
        scanf("%d", &arr1[i]);
    }

    printf("\nArray 1: ");

    for(int i=0; i<n; i++){

        printf("\nIndex [%d]: %d", i, arr1[i]);
        
    }

    /* Copy */
    for(int i=0; i<n; i++){

        arr2[i] = arr1[i];
    }

    printf("\nArray 2: ");

    for(int i=0; i<n; i++){

        printf("\nIndex [%d]: %d", i, arr2[i]);
        
    }
    
    return 0;
}
