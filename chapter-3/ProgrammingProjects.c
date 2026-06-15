// 1.
#include <stdio.h>

// 
int main(void){
    int  x, y, z;
    printf("Enter a date(mm/dd/yyyy): ");
    scanf("%d/%d/%d", &x, &y, &z);
    printf("You entered the date: %d%.2d%d\n", z, x, y );
    return 0;

}


// 2.
int main(void){
    int item, x, y, z;
    float price;
    printf("Enter item No. ");
    scanf("%d", &item);

    printf("Enter unit price: ");
    scanf("%f", &price);

    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &x, &y, &z);

    printf("Item\t\tUnit\t\tPurchase\n\t\tPrice\t\tDate\n%d\t\t$%7.2f\t%d/%d/%d\n", item, price, x, y, z);
    return 0;
}


// 3.**

int main(void){
    int a, b, c, d, e;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &a, &b, &c, &d, &e);

    printf("GSI prefix: %d\n", a);
    printf("Group identifier: %d\n", b);
    printf("Publisher code: %d\n", c);
    printf("Item number: %d\n", d);
    printf("Check digit: %d\n", e);
    return 0;

}


// 4.

int main(void){
    int a, b, c;

    printf("phone number[(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &a, &b, &c);

    printf("You entered:  %d.%d.%d\n", a, b, c);
    return 0;

}


// 5..******
int main(void){
    int a, b, c, d, e, f, g, h, i, j, k, l, m,n, o, p;
    printf("Enter the numbers from 1 to 16 in any order: \n");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &a, &c, &d, &f, &b, &e, &g, &i, &h, &k, &j, &l, &m, &p, &o, &n);

    printf("%2d %2d %2d %2d\n", a, c, d, f);
    printf("%2d %2d %2d %2d\n", b, e, g, i);
    printf("%2d %2d %2d %2d\n", h, k, j, l);
    printf("%2d %2d %2d %2d\n\n", m, p, o, n);

    int sum_row1, sum_row2, sum_row3, sum_row4, sum_column1, sum_column2, sum_column3, sum_column4, sum_diagonal1, sum_diagonal2;
    sum_row1 = a + c + d + f;
    sum_row2 = b + e + g + i;
    sum_row3 = h + k + j + l;
    sum_row4 = m + p+ o + n;

    printf("Row sums: %d %d %d %d\n", sum_row1, sum_row2, sum_row3, sum_row4);

    sum_column1 = a + b + h + m;
    sum_column2 = c + e + k + p;
    sum_column3 = d + g + j + o;
    sum_column4 = f + i + l + n;

    printf("Column sums: %d %d %d %d\n", sum_column1, sum_column2, sum_column3, sum_column4);


    sum_diagonal1 = a + e + j + n;
    sum_diagonal2 = f + g + k + m;

    printf("Diagonal sums: %d %d\n", sum_diagonal1, sum_diagonal2);

    return 0;

}


// 6.. upgraded addfrac.c program.

int main(void){
    int num1, denom1, num2, denom2, result_num, result_denom;
    printf("Enter two fractions separated by a plus sign: ");
    scanf("%d/%d+%d/%d", &num1, &denom1, &num2, &denom2);
    
    result_num = num1 * denom2 + num2 * denom1;
    result_denom = denom1 * denom2;
    printf("The sum is %d/%d\n", result_num, result_denom);
    return 0;
}
