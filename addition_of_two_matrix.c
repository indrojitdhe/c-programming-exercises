/* Author: INDROJIT DHE SHAON
Personal Code: 17
File: addition_of_two_matrix.c */

#include<stdio.h>


int main(){
    
    int row, col;
    
    printf("Enter the range for row: ");
    scanf("%d", &row);

    printf("Enter the range for column: ");
    scanf("%d", &col);

    int matrixA[row][col];
    int matrixB[row][col];
    int matrixC[row][col];

    printf("Enter the input for Matrix A:\n");

    for(int i=0; i<row; i++){
        
        for(int j=0; j<col; j++){

            printf("Index [%d][%d]: ", i, j);
            scanf("%d", &matrixA[i][j]);
        }
        
    }

    printf("Enter the input for Matrix B:\n");

    for(int i=0; i<row; i++){
        
        for(int j=0; j<col; j++){

            printf("Index [%d][%d]: ", i, j);
            scanf("%d", &matrixB[i][j]);
        }
        
    }

    
    /* Display */

    printf("\nMatrix A: \n");

    for(int i=0; i<row; i++){
        
        for(int j=0; j<col; j++){

            printf("%d ", matrixA[i][j]);
            
        }

        printf("\n");
        
    }

    printf("\nMatrix B: \n");

    for(int i=0; i<row; i++){
        
        for(int j=0; j<col; j++){

            printf("%d ", matrixB[i][j]);
            
        }

        printf("\n");
        
    }

    /* Addition Part */

    for(int i=0; i<row; i++){
        
        for(int j=0; j<col; j++){

            matrixC[i][j] = matrixA[i][j] + matrixB[i][j];
            
        }
        
    }

    printf("\nMatrix A + Matrix B: \n");

    for(int i=0; i<row; i++){
        
        for(int j=0; j<col; j++){

            printf("%d ", matrixC[i][j]);
            
        }

        printf("\n");
        
    }


    return 0;
}
