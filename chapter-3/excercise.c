// 1
/*
// 1. 
a. (      86), (    1040)
b.( 3.02530e+01)  //contains 12 characters overall and a 5 digits after decimal period.
c.(8.21620) //print boga
d. it printa 1 x e-06 



*/

// 2.
#include <stdio.h>
int main(void){
    float x;
    x = 842;
    printf("|%-8.1e|\n", x ); //ans of a
    printf("|%8.6e|\n", x); //ans of b(doubt h mujhe)
    printf("|%-8.3f|\n", x); //ans of c
    printf("|%6.0f|\n", x); //ans of d
    return 0;

}

// 3. nhi hua

// 4.
/*
after call  value of x- 10.3  , i - 5, j- 6
*/


// 5.
/*
after call back
x- 12.3
y - 45.6
i- 789

*/



// 6. 
// modify of adfrac.c program so that the user is allowed to enter fractions that contains spaces before and after each / character.
int main(void){
    int num1, denom1, num2, denom2, result_num, result_denom;
    printf("Enter first fraction: ");
    scanf("%d /%d", &num1, &denom1);
  
    
    printf("Enter second fraction: ");
    scanf("%d /%d", &num2, &denom2);

    result_num = num1 * denom2 + num2 * denom1;
    result_denom = denom1 * denom2;
    printf("The sum is %d/%d\n", result_num, result_denom);
    return 0;
}