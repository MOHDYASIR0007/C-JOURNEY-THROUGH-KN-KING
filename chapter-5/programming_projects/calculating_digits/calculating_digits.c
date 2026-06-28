#include <stdio.h>

int main()
{ int a;
    printf("Enter a number: ");
    scanf("%d", &a);
     
    if ((0 <= a && a <= 9) || (a >= -9 && a <= -1))
        printf("The number %d has 1 digit\n", a);
    else if ((10 <= a  && a <= 99) || (a >= -99 && a <= -10))
        printf("The number %d has 2 digits\n", a);
    else if ((100 <= a && a <= 999) || (a >= -999 && a <= -100))
        printf("The number %d has 3 digits\n", a);
    else if ((1000 <= a && a <= 9999) || (a >= -9999 && a <= -1000))
        printf("The number %d has 4 digits\n", a);

    else printf("Input out of range. Supported range is -9999 to 9999");
    

      return 0;
}
