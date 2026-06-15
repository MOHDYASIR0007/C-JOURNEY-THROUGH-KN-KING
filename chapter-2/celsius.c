/*Converts a Farheneit temp to celsius */
#include <stdio.h>
#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)

int main(void){
    float farheneit, celsius;
    printf("Enter Farheneit temperature: ");
    scanf("%f", &farheneit);
    celsius = (farheneit - FREEZING_PT) * SCALE_FACTOR;
    printf("Celsius equivalent: %.1f\n", celsius);
    return 0;
}

// defining (5.0 / 9.0) is important istead of 5 / 9. becz C truncaates the result when two integers are divided and as a result 5 / 9 is 0.


// 2.7 IDENTIFIERS
/*As we're writing a program, we'll have to choose names for variables, functions macros and other entitites; These names called identifiers.

* some eg of legal identifiers..
times10 , get_next_char  _done

not legal identifiers- 10times get-next-char  (no - , start with number is not allowed.)

* C is case sensitive so every word can be use permutated.


/**********************************************************************************
 * auto enum restrict unsigned
 * break extern return void
 * case float short   volatile
 * char  for  signed  while
 * const  goto  sizeof  _Bool
 * continue   if   static   _Complex
 * default  inline   struct   _Imaginary
 * do  int   switch
 * double  long  typedef
 * else  register  union 
 * ******************************************************************************/
 


//  2.8 Layout of a C program
// we can think of a C program as a series of tokens 