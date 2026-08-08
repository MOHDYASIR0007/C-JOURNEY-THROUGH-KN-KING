//Q_2 SOLUTION...

#include <stdio.h>

int main()
{
  int m, n, gcd, remainder;

  printf("Enter two integrs: ");
  scanf("%d%d", &m, &n);s

 
    while (n != 0) {
      
        remainder = m % n;

        if (remainder == 0) {
          printf("Greastest common divisor: %d\n", n); break;
        }

        else {
          m = n;
          n = remainder;}

          if (m % n == 0) {
            printf("Greastest common divisor: %d\n", n); break;}     
        
    }
     return 0;
  }
    
