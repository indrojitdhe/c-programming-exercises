/* Author: INDROJIT DHE SHAON
Personal Code: 17
File: sum_of_array.c */

#include<stdio.h>


int main(){

    int n;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int values[n];

    for(int i=0; i<n; i++){
        
        printf("Number %d = ", i+1);
        scanf("%d", &values[i]);
    }

    printf("Array: ");

    for(int i=0; i<n; i++){
        
        printf("%d ", values[i]);
    }

    printf("\n");

    int sum = 0;

    for(int i=0; i<n; i++){
        
        sum = sum + values[i];
    }

    printf("Sum of Array: %d", sum);

    return 0;
}
