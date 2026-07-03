//we have to check that if the entered upc is valid or not?

#include <stdio.h>

int main()
{
    int first_sum, second_sum, total, d, i1, i2, i3, i4, i5 , j1, j2, j3, j4, j5, j6, ch_digit;
    printf("Enter the 12-digit upc in std format(a bcdef ghijk l): ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d, &i1, &i2, &i3, &i4, &i5, &j1, &j2, &j3, &j4, &j5, &j6);

    first_sum = d + i2 + i4 + j1 + j3 + j5;
    second_sum = i1 + i3 + i5 + j2 + j4;
    total = 3 * first_sum + second_sum;
    ch_digit = 9 - ((total -1) % 10 );

    if (ch_digit == j6)
        printf("VALID\n");
    
    else 
        printf("NOT VALID\n");
    

    return 0;

}