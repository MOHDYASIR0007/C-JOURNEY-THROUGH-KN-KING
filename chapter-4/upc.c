/*Computes a universal product Code check digit  */

#include <stdio.h>
int main(void){
    int first_sum, second_sum, total, d, i1, i2, i3, i4, i5 , j1, j2, j3, j4, j5, ch_dig;
    printf("Enter the first (single) digit:  ");
    scanf("%1d", &d);

    printf("Enter first group of five digits: ");
    scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);

    printf("Enter second group of five digits: ");
    scanf("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);

    first_sum = d + i2 + i4 + j1 + j3 + j5;
    second_sum = i1 + i3 + i5 + j2 + j4;
    total = 3 * first_sum + second_sum;

    printf("Check digit: %d\n", 9 - ((total -1) % 10 ));

    // slight add on from my side. it combines the check digit with rest of the code and print full UPC code value.
    ch_dig = 9 - ((total -1) % 10 );
    printf("Final UPC Code: %d   %d%d%d%d%d  %d%d%d%d%d  %d\n", d, i1, i2, i3, i4, i5 , j1, j2, j3, j4, j5, ch_dig);

    return 0;



}