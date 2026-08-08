//This program sums a series of numbers

#include <stdio.h>

int main()
{   int n, sum = 0;
    printf("This program prints a sum of series of integers.\n");
    printf("Enter integers (0 to termiinate): ");
    scanf("%d", &n);

    
    while (n != 0) {
        sum += n;
        scanf("%d", &n);

    }
    printf("The sum is : %d\n", sum);


    return 0;

}