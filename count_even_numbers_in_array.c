/* Author: INDROJIT DHE SHAON
Personal Code: 17
File: traverse_even_numbers_in_array.c */

#include<stdio.h>

void traverseArr(int *arr, int n);

int main(){

    int n;
    
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];

    /*Taking Input*/
    for(int i=0; i<n; i++){

        printf("Index '%d': ", i);
        scanf("%d",&arr[i]);
    }

    traverseArr(arr, n);
    
    return 0;
}

void traverseArr(int *arr, int n){

    /* Display Output */
    for(int i=0; i<n; i++){

        if(arr[i]%2==0){

            printf("%d ", arr[i]);
        }
    }

}
