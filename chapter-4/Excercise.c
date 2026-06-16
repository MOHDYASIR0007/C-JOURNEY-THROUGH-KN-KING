// Exercise begins

#include <stdio.h>

// 1.

// a.
int main(void){
int i, j;
i = 5; j = 3;
printf("%d %d\n", i / j , i % j); // prints 1 irst then 2.
return 0;
}

// b.
int main(void){
int i, j;
i = 2; j = 3;
printf("%d\n", (i + 10) % j); // prints 0
return 0;
}

// c.

int main(void){
int i, j, k;
i = 7; j = 8, k = 9;
printf("%d\n", (i + 10) % k / j); // prints 1. 
return 0;
}


// d.


int main(void){
int i, j, k;
i = 1; j = 2, k = 3;
printf("%d\n", (i + 5) % (j + 2) / k); // prints 0 .
return 0;
}





// 2.

int main(void){
int i, j ;
printf("Enter integer one: ");
scanf("%d", &i);
printf("Enter integer one: ");
scanf("%d", &j);

printf("%d\n %d\n", (-i)/j, -(i/j)); //yeah they prints the same values . cuz its the mathematical way to deal with integers.
return 0;
}



// 3.
/*
A. value is 1
b. either -1 or -2
c. either -1 or -2
d. 1 is the answer.




// 4. 
a. ans is 1
b. answer is -1.
c. ans is -1
d. answer is 1.


5.


a. answer is 3
b. ans is either -3 or 2.
c. its -2 or 3.







// 6.

a. 3 is the answer
b. -3 is the answer
c. -3 is the answer
d. 3 is the answer


*/

// 7. Computes a universal product Code check digit with modification acc to what excercise .7 wants.

int main(void){
    int first_sum, second_sum, total, d, i1, i2, i3, i4, i5 , j1, j2, j3, j4, j5 ;
    printf("Enter the first (single) digit:  ");
    scanf("%1d", &d);

    printf("Enter first group of five digits: ");
    scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);

    printf("Enter second group of five digits: ");
    scanf("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);

    first_sum = d + i2 + i4 + j1 + j3 + j5;
    second_sum = i1 + i3 + i5 + j2 + j4;
    total = 3 * first_sum + second_sum;

    printf("Check digit: %d\n", 10 - ((total) % 10));
    return 0;
}
// it doesnt works cuz it's failed at edge cases like for eg. upc - 0 10005 33330
// prints 0 in actual correct upc.c file  hwhile print 10 in this program when check digit is executed as 10 -((total) % 10).





// 8. Modification of upc.c acc to what king's  ask to check.

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

    printf("Check digit: %d\n", (10 - (total % 10 )) % 10);

    return 0;



}
// the programm works fine in the same way that the upc.c the original one works.




// 9..

int main(void){
    int i, j, k;

    // part a.
   i = 7; j = 8;
   i *= j + 1 ; 
   printf("%d %d\n", i, j); //prints 63 8 according to me 

//    partb
    i = j = k = 1;
    i += j += k;

    printf("%d %d %d\n", i, j, k); //prints 3 2 1.

    // pt. c

    i = 1; j = 2; k = 3;
    i -=j -= k;
    printf("%d %d %d\n", i, j, k); //prints k =3, j = -1, i = 2


    // pt.d

    i = 2; j = 1; k = 0;
    i *= j *= k;
    printf("%d %d %d\n", i, j, k); //prints 0 in all 


   


    return 0;



}


// 10. ** important 
int main(void){
    
    int i, j, k;
    // part a.
    i = 6; 
    j = i += i;
    printf("%d %d\n", i, j ); //prints 12 12
    
    // part b
    i = 5; 
    j = (i -= 2) + 1;
    printf("%d %d\n", i, j); //prints 3 4

    // part c.
    i = 7;
    j = 6 + ( i = 2.5);
    printf("%d %d\n", i, j); //prints 2  8

    // part d.  
    i = 2; j =8;
    j = (i = 6) + (j = 3);
    printf("%d %d\n", i, j); // prints 6 9
    return 0;
}


// 11. 
int main(void){
    
    int i, j, k;
    // part a.
    i = 1; 
    printf("%d\n", i++ - 1 ); //prints 0
    printf("%d\n", i); //prints 2.
    
    // part b
    i = 10; j = 5; 
    printf("%d\n", i++ - j++); //prints 5
    printf("%d %d\n", i, j); // prints 11 6

    // part c.
    i = 7;
    j = 8;
    printf("%d\n", i++ -  --j); //prints 0
    printf("%d %d\n", i, j); //prints 8 7 

    // part d.  
    i = 3; j = 4; k = 5;
    printf("%d\n", i++ -  j++ + --k); //prints 3
    printf("%d %d %d\n", i, j, k); //prints 4 5 4
    return 0;
}




// 12.
int main(void){
    
    int i, j;
    // part a.###**
    i = 5;
    j = ++i * 3 - 2; 
    printf("%d %d\n", i, j); //prints 6 16
    
    // part b
    i = 5;
    j = 3 - 2 * i++;
    printf("%d %d\n", i, j); // prints 6 -7

    // part c.
    i = 7;
    j = 3 * i-- + 2;
    printf("%d %d\n", i, j); //prints 6 23

    // part d.  
    i = 7; 
    j = 3 + --i * 2;
    printf("%d %d\n", i, j); //prints 6 15
    return 0;
}

// 13.
/*
* i += 1 means i = i + 1 hence the ++i is the answer , because it represent the operator as add 1 in i, 
whereas i++ represent as hold the value of i and then when the i is recall again then print/show i + 1 as a result.*/


// 14. 
/*
part a.- ((a * b) - (c * d))+ e

partb. - ((a / b) % (c / d))


part c. - (-a - b) + c - (+ d)


partd - a * (-b / c) - d


*/

// 15..
// part 1
int main(void){
    int i, j;
    i = 1; j = 2;
    
    i += j;
    printf("%d %d\n",i, j); ///prints 3 2

    

    return 0;
}

// partb 
int main(void){
    int i, j;
    i = 1; j = 2;

    i--;
    printf("%d %d\n",i, j); //prints 0 2

    return 0;
}


// part c
int main(void){
    int i, j;
    i = 1; j = 2;
     i * j / i; //eqn h yeh 
    printf("%d %d\n",i, j); //prints 1 2


    return 0;
}


// part d
int main(void){
    int i, j;
    i = 1; j = 2;
     i % ++j;
    printf("%d %d\n",i, j); //prints 1 3
    return 0;
}
