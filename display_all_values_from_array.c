/* Author: INDROJIT DHE SHAON
Personal Code: 17
File: display_all_values_from_array.c */

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

    for(int i=0; i<n; i++){
        
        printf("%d ", values[i]);
    }

    return 0;
}
