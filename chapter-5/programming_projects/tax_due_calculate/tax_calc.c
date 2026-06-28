#include <stdio.h>

int main()
{   float income;
    printf("Enter amount of taxable income:$ ");
    scanf("%f", &income);

    if (income < 750)
        printf("Amount of tax due: $%.2f\n", (0.01f) * income);

    else if (income >= 750 && income < 2250)
        printf("Amount of tax due: $%.2f\n", 7.50f + (0.02f) * (income - 750));
    
    else if (income >= 2250 && income < 3750)
        printf("Amount of tax due: $%.2f\n", 37.50f + (0.03f) * (income - 2250));
    
    else if (income >= 3750 && income <=5250)
        printf("Amount of tax due: $%.2f\n", 82.50f + (0.04f) * (income - 3750));

    else if (income >= 5250 && income < 7000)
        printf("Amount of tax due: $%.2f\n", 142.50f + (0.05f) * (income - 5250));

    else if (income >= 7000)
        printf("Amount of tax due: $%.2f\n", 230.00f + (0.06f) * (income - 7000));

    return 0;

}