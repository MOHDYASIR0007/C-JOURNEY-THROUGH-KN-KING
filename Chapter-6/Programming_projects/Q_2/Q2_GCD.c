//Q_2 SOLUTION...

//Q_2 SOLUTION...

#include <stdio.h>

int main()
{
  int m, n, gcd, remainder;

  printf("Enter two integrs: ");
  scanf("%d%d", &m, &n);

 
    for (;;) {
      
        if (n == 0) {
          gcd = m;
          printf("Greastest common divisor: %d\n", m);
          break;
        }
      
        else {

          remainder = m % n;
          m = n;
          n = remainder;
        } 

          
        }
      
     return 0;
  }
    
    
