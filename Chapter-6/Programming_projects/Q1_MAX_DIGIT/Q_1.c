
#include <stdio.h>

int main()
{
  float amt, max = 0.0;
  for (;;)
   {
    printf("Enter a number: ");
    scanf("%f", &amt);

    if (amt > max && amt > 0)
          max = amt;

      if (amt == 0 || amt < 0) {
        
        printf("The largest number entered was %.2f \n", max); 
        break;
      }
   }
  }
