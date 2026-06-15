// Printing a pun programm.
#include <stdio.h>  //it is the standar i/o library 
int main(void)
{
    printf("To C, or not to c : that is the question. \n");  //the programm that is going to be execute inside main.
    printf("Brevity is the soul of wit.\n   --Shakespeare\n");
    return 0;
}
/* Name: Pun.c*/
// and /* */ are two ways of commenting in C. // is the style of c99 and other is of C89.

// we can make a commenting box as.
/********************************************
 * NamE: PUN.C                              *
 * PURpose: prints a bad pun.               *
 * Author: K.N king                         *
 ********************************************/

// // general way 
// #include <stdio.h>
// int main(void){
//     statements
// }

// Directives always begins with a # character.


// VARIABLES AND ASSIGNMENTS
// TYPES - Every variable must have a type , which specifies what kind of data it will hold.
// right now we ise int and float.

/* *************************************************************************************************************
* The largest value of int is typically 2,147,483,647 but can be small as 32,767.                              *
* Arithmetic on float is slower than on int numbers.                                                           *
* DRawback of float value- if we store 0.1  it has a value such as 0.0999999999999987 thanks to rounding error *
****************************************************************************************************************/

// DECLARATIONS
/*
*variable must be declared for the benefit of compiler before they can be used.
*we first specify the type then name .
eg int height;
eg float profit; 

*/

// if several variables have same type , their drclarations can be combined.
/*
eg  int height, length, width, volume;
    float profit, loss;

    note: each complete declaration ends with a semicolon.

*/
/****************************************************************************************
 * when main contains declarations , these must preceed statements.(not in C99)- as     *
 * int main(void){                                                                      *
  declarations                                                                          *
  statements                                                                            *
  }                                                                                     *
* in C99 main might contain a declaration , then statement then another declaration..   *                                                                                   * 
 ***************************************************************************************/

//  ASSIGNMENT
/*
*a variable can be given a value by means of assignment.
* eg
 height = 8;
 weight = 12;
 width = 10;

*/
// Before a variable can be assigned a value or used in any other way , it must first be declared.

// eg
int height;
height = 8;
/*
but not as 

height = 8;
int height;
*/

// its best to append the letter f for float to a constant that contains a decimal point if the number is assigned to a float variable.

// eg
float profit;
profit = 2150.48f; //failing to inlude f may cause a warning from a compiler.

/*int heigth, width, length;
    height = 8;
    length = 12;
    width = 10;
    volume = (height) * (length) * width;  //vol is now 960.

 */

// PRINTING THE VALUE OF VARIABLE 
/*
say we have height = h;
printf("height: %d\n", height);

here %d is use for int values , for float %f is used. %d,%f are the place-holders

*/
// eg
    int main(void){

    int height, width, length, volume;

    height = 8;
    length = 12;
    width = 10;
    volume = (height) * (length) * width;  
   printf("Volume: %d\n", volume);
}
    
// by default %f displays a number with six digit after the decimal point. to force it to display upto p digits we use .p btw % and f .
//  as profit = $2150.48
// printf("PRofit: $%.2f\n", profit)

/*
there is no limit of variables that can be print by a single call of printf
as 
printf("Height: %d Length: %d\n, height, length");
*/


// 


// eg- // Computing the Dimensional weight  12" x 10" x 8" box


   int main(void){

    int height, width, length, volume, weight;

    height = 8; //in inches 
    length = 12; //in inches
    width = 10; //in inches
    volume = (height) * (length) * width;
    weight = (volume + 165) / 166;
    printf("Dimensions: %dx%dx%d \n", length, width, height); 
   printf("Volume(cubic inches): %d\n", volume);
   printf("Dimesnional weigth(pounds): %d\n",weight);
   return 0;
   }


//    eg 
/*
int main(void)

{int height, weight, length, width = 10;
volume = height * length * width;
printf("%d\n, height * length * width"); // or can be replace as "%d\n, volume"
return 0;
}
it prints 0 idk why?

*/

// 2.5 Reading Input
/*
# to read an int value we use scanf("%d, &i");     // reads an integer; stores into i.
# TO read a folat value - we use -- scanf("%f, &x"); //reads a float value; stores into x.(%f works only on float values.)
*/



// Revisit Dimensional weight.
// computes the dimensional weight of a box from input provided by the user.


#include <stdio.h>

// eg
   int main(void){

    int height, width, length, volume, weight;

    printf("Enter height of box: ");
    scanf("%d", &height);

     printf("Enter width: ");
    scanf("%d", &width);

     printf("Enter length: ");
    scanf("%d", &length);
    
    volume = (height) * (length) * width;
    weight = (volume + 165) / 166;
    printf("Dimensions: %dx%dx%d \n", length, width, height);
   printf("Volume(cubic inches): %d\n", volume);
   printf("Dimesnional weigth(pounds): %d\n",weight);
   return 0;
   }



//    2.6 Defining Names for Constants
/*using a feature known as macro definintion , we can name this constants (in dweight2 or dweight programs)*/
// #define INCHES_PER_POUND 166
// define is the pre-processing directive just as #include is .
// eg changes



// eg
#include <stdio.h>
#define INCHES_PER_POUND 166
   int main(void){

    int height, width, length, volume, weight;

    height = 8; //in inches 
    length = 12; //in inches
    width = 10; //in inches
    volume = (height) * (length) * width;
    weight = (volume + INCHES_PER_POUND - 1) / INCHES_PER_POUND;
    printf("Dimensions: %dx%dx%d \n", length, width, height);
   printf("Volume(cubic inches): %d\n", volume);
   printf("Dimesnional weigth(pounds): %d\n",weight);
   return 0;
   }
// #define RECIPROCAL_OF_PI (1.0f / 3.14159f)

// celsius.c ka eg.
/*
/*Converts a Farheneit temp to celsius
/*
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
*/



