#include <stdio.h>

// 1.

int main()
{   int i, j, k;

    // a.
    i = 2; j = 3;
    k = i * j == 6;
    printf("%d\n", k); //prints 1 cuxz 2 * 3 is 6 and 6 == 6 which is True.

    //b.
    i = 5; j = 10; k = 1;
    printf("%d\n", k > i < j); //prints 1 , logic-->  k > i is false so it's 0 then 0 < j which is true so its 1.
    
    
    //c.
    i = 3; j = 4; k = 5;
    printf("%d\n", i < j == j < k); //prints 1. , i < j is True == 4 (false) hence False and then False(0) < 5 is True so 1.


    //d.
    i = 3; j = 4; k = 5;
    printf("%d\n", i % j + 1 < k); // prints 1 , logic-> i % j is 0 then + 1 is 1 so True. and 1 < k so True therefore prints 1.

    return 0;

}






//2.

int main()
{
int i, j, k;
//main concept is used here is the truth table concepts of 'and',  'or', and 'not' operations.
// a.
    i = 10; j = 5;
    printf("%d\n", !i < j); //prints 1. and the !i means if i != 0 then !i is 0(False) else if i = 0 then !i = 1(True). Cuz it ! means the not operation.

    //b.
    i = 2; j = 1;
    printf("%d\n", !!i + !j); //prints 1. cuz !!moves from right to left and as !!2 is !0 after first operation then after second it's 1.

    //c.
    i = 5; j = 0; k = -5;
    printf("%d\n", i && j || k); // i && j is true && false onto which 'and' operation called and results 0 .
    //then 0 || k is evaluated via 'or' operation which is false || true is 1. hence final print result is 1.

    //d.
    i = 1; j = 2; k = 3;
    printf("%d\n", i < j || k); // here i < j is true hence 1. so then True || k = 3(true) so true || true in or operation results True 1. by truth table concepts.


    return 0;
}
// results of 'or' operations. ( || )

/* //Truth table of 'OR' operations//

1. True || True is True
2. True || False is True
3. False || True is True
4. False || False is False

*/




/* // Truth table of 'AND'(&&) operations //

1. True && True is True
2. True && False is False
3. False && True is False
4. False && False is False

*/


// True is only when something != 0.
// False is only when something = 0.





//3.

int main()
{ int i, j, k;

//a.
    i = 3; j = 4; k = 5;
    printf("%d \n", i < j || ++j < k); //prints 1 cuz 3<4 so true(1) || ++j(True so 1) is True do prints 1 nd 1 < 5 which is also true so 1.   
    printf("%d %d %d\n", i, j, k); // prints 3 4 5


    // b.
    i = 7; j = 8; k = 9;
    printf("%d\n ", ++i || (j = k)); //prints 1 cuz ++i is 9 so True and (j != k) then its false so True || False is True so 1.

    //c.
    i = 7; j = 8; k = 9;
    printf("%d\n ", (i = j) || (j = k)); //prints 1. cuz  i = j assigned value 8 to i so True. and therefore as the left side is true than rest off the expression is also true by concept of short-circuit evaluations. so True || True is True (1).

    printf("%d %d %d\n", i, j, k); //prints 8 8 9



    //d.
    i = 1; j = 1; k = 1;
    printf("%d\n ", ++i || ++j && ++k); //prints 1
    printf("%d %d %d\n", i, j, k); //prints 2 1 1


    return 0;


}

//4.









//5.

int main()
{   int a, n;
    printf("What's n?:");
    scanf("%d", &a);

    if (n >= 1 <= 10)
        printf("n is between 1 and 10\n");
        //it's not legal cuz it prints the statement of printf either value is anything.
        return 0;
}


//6.
int main()
{   int a, n;
    printf("What's n?:");
    scanf("%d", &a);

    if (n == 1-10)
        printf("n is between 1 and 10\n");
       //it's not legal cuz == assign 1-10 to n which isn't a valid equal.
       //hence it doesn't print any output.
       return 0;
}

//7.
int main()
{   int i, j, n;
    i = 17;
    printf("%d\n", i >= 0 ? : -i); //prints 1(True) when i = 17

    j = -17;
    printf("%d\n", j >= 0 ? : -j);// since j < 0 so it prints -(j) that is 17.
    return 0;

}


//8.
int main()
{  if (age >= 13 && age <= 19)
        teenager = true;
    else 
        teenager = false;
//short representation.
/*
we can write it as ..
    teenager = (age >= 13 && age <= 19 )

*/


    return 0;
}


//9.



//10.
int main(){
    int i;
    i = 1;
    switch (i % 3) {
        case 0: printf("zero\n");// skips because 0 % 3 is zero but i is aasigned to 1 above.
        case 1: printf("one\n");  // 1 % 3 is 1 so it prints one.(here switch enters the programm)
        case 2: printf("two\n"); // it prints too. but unfortunately it doesnt check by switch again cuz there is no break statement after case  1.
        //final output is one   two
        return 0;
    }
}

//if we add the break statement after case 1 then switch agin check the programmm (I % 3) and finds it 2 but the i is assigned to 1 above hence it doesnt print it and the output is only 'one'.


//11.
int main()
    { int area_code;
    
        printf("Enter the Area Code:");
        scanf("%3d", &area_code);

    switch (area_code) {
        case 229: printf("Albany\n");     break;

        case 404: case 470: case 678: case 770: 
            printf("Atlanta\n");    break;

        case 478: printf("Macon\n");      break;

        case 706: case 762:
            printf("Columbus\n");   break;
        
        case 912: printf("Savannah\n");   break;

    default: printf("Area code not recognized\n"); break;

        
    }
   
        return 0;
    }

/*/////////................End................./////*/