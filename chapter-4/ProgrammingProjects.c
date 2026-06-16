#include <stdio.h>

//1.
int main(void){
    int i, j, n;
    printf("Enter a two-digit number: ");
    scanf("%d", &n);
    j = n % 10;
    i = n / 10;
    printf("The reversal is: %d%d\n", j, i);
    return 0;

}



// 2. 
int main(void){
    int i, j, k, n;
    printf("Enter a three-digit number: ");
    scanf("%d", &n);
    i = n % 10;
    j = (n / 10) % 10;
    k = n / 100;
    printf("The reversal is: %d%d%d\n", i ,j, k);
    return 0;

}

//kb. for that type of questions.

/*

* n % 10 - gives last digit
* (n / 10) % 10 - gives second last digit
* (n / 100) % 10 - gives 3rd last digit.
........
........
..........
* (n / 10^(x-1)) % 10       - gives the xth last digit, x =  1,2,3,4..............m


*/




// 3.

int main(void){
    int i, j, k;
    printf("Enter a three-digit number: ");
    scanf("%1d%1d%1d", &i, &j, &k);
    
    printf("The reversal: %d%d%d\n", k, j, i);
    return 0;

}



// 4..

int main(void){
    int i, j, k, l, m, n;
    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &n);

    i = n % 8; // Gives the remainder that's the last digit of the octal number.
    j = (n / 8) % 8;

    k = (n / 64) % 8 ;//gives 3rd last digit
    l = (n / 512) % 8;
    m = (n / 4096) % 8;


    printf("In octal, your number is: %d%d%d%d%d\n", m, l, k, j, i);
    return 0;

}


// 5.

int main(void){
    int a, b, c, d, e, f, g, h, i, j, k, first_sum, second_sum, total;
    printf("Enter the first 11 digits of a UPC: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j, &k);
     
    first_sum = a + c + e + g + i + k;
    second_sum = b + d + f + h + j;
    total = 3 * first_sum + second_sum;

    printf("Check digit: %d\n", 9 - ((total -1) % 10 ));
  
    return 0;

}


// 6..

#include <stdio.h>

int main(void){
    int a, b, c, d, e, f, g, h, i, j, k, l, first_sum, second_sum, total;
    printf("Enter the first 12 digits of a EAN: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j, &k, &l);
    
    first_sum = b + d + f + h + j + l;
    second_sum = a + c + e + g + i + k;
    
    total = 3 * first_sum + second_sum;

    printf("Check digit: %d\n", 9 - ((total -1) % 10 ));
  
    return 0;

}

