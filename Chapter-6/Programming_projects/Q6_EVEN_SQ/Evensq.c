//Q_2 SOLUTION...

#include <stdio.h>

int main()
{
  int  i, n, even;

  printf("Enter a number n: ");
  scanf("%d", &n);

  for(i = 1; i * i <= n; i++) {
    even = i % 2;
    if (even == 0){
      printf("%d\n", i * i); 
  } 
}
}
  
    
