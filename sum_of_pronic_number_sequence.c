/* Author: INDROJIT DHE SHAON
Personal Code: 17
File: sum_of_pronic_number_sequence.c */

#include<stdio.h>


int main(){

    int n1, n2, sum=0, i, j;

    printf("Enter the first boundary of series: ");
    scanf("%d", &n1);

    printf("Enter the second boundary of series: ");
    scanf("%d", &n2);

    printf("1.2 + 2.3 + 3.4 + ........ + %d.%d = ", n1, n2);

    for(i=1, j=2;  i<=n1, j<=n2; i++, j++){

        sum = sum + i*j;
    }

    printf("%d", sum);

    return 0;
}
