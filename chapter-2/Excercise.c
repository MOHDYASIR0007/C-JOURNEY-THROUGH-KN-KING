// Programming projects.

#include <stdio.h>
int main(void){
    printf("        *\n");
    printf("       *\n");
    printf("      *\n");
    printf("     *\n");
    printf("*   *\n");
    printf(" * *\n");
    printf("  *\n");
    return 0;
}


// 2.
int main(void){
    int r, volume; //r stands for radius
    r = 10;
    volume = (4.0f / 3.0f ) * r * r * r;
    printf("Volume: %d\n", volume);
    return 0;
}



// 3.
int main(void){
    int r, volume; //r stands for radius
    printf("Enter radius: ");
    scanf("%d", &r);
    volume = (4.0f / 3.0f ) * r * r * r;
    printf("Volume: %d\n", volume);
    return 0;
}





// 3(self modified)
int main(void){
    int r; //r stands for radius
    float volume;
    printf("Enter radius: ");
    scanf("%d", &r);
    volume = (4.0f / 3.0f ) * r * r * r;
    printf("Volume: %.3f\n", volume);
    return 0;
}



// 4

int main(void){
    float amount, TaxedAmt;
printf("Enter an amount: ");
scanf("%f",&amount);
TaxedAmt = amount * (5.0f / 100) + amount;
printf("With tax added: $%.2f\n",TaxedAmt);
return 0;
}

// 5
int main(void){
    int x, polynomial;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    polynomial = 3 * (x * x * x * x * x ) + 2 * (x * x * x * x ) - 5 * (x * x * x ) - (x * x ) + 7 * (x) - 6 ;

    printf("Value of Polynomial: %d\n", polynomial);
    return 0;
}


// 6.
int main(void){
    int x, polynomial;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    polynomial = ((((3 * x + 2)* x - 5) * x + 7) * x - 6); // that technique for evaluating polynomials is called Horner's Rule.

    printf("Value of Polynomial: %d\n", polynomial);
    return 0;
}

// 7. thoda improve kiya hua using claude hint (likha khud h.)
/*int main(void){
    int amount, twenty, ten, five, one;
   printf("Enter a dollar amount: ");
   scanf("%d", &amount);
   twenty = amount / 20;
   ten = (amount % 20) / 10;
   five = (amount % 20 % 10) / 5;
   one = (amount % 20 % 10 % 5) / 1;
   printf("$20 bills: %d\n", twenty);
   printf("$10 bills: %d\n", ten);
   printf("$5 bills: %d\n", five);
   printf("$1 bills: %d\n", one);
   return 0;


}
*/

// 7. my logic.
int main(void){
    int amount, twenty, ten, five, one;
   printf("Enter a dollar amount: ");
   scanf("%d", &amount);
   twenty = amount / 20;
   ten = (amount % 20) / 10;
   five = (amount % 10) / 5;
   one = (amount % 5) / 1;
   printf("$20 bills: %d\n", twenty);
   printf("$10 bills: %d\n", ten);
   printf("$5 bills: %d\n", five);
   printf("$1 bills: %d\n", one);
   return 0;


}

// 8.

int main(void){
    float monthly, amount, remain, m1, m2, interest;
    printf("Enter amount of loan: ");
    scanf("%f", &amount);

    printf("Enter interest rate: ");
    scanf("%f", &interest);

    printf("Enter monthly payment: ");
    scanf("%f", &monthly);

    remain = amount - monthly + ((interest / 100) / 12 )* amount;
    printf("Balance remaining after first payment: $%.2f\n", remain);
    
    m1 = remain - monthly + ((interest / 100) / 12 )* remain;
    printf("Balance remaining after second payment: $%.2f\n", m1);
    m2 = m1 - monthly + ((interest / 100) / 12 )* m1;
    printf("Balance remaining after third payment: $%.2f\n", m2);

   return 0;


}