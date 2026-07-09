#include <stdio.h>

int main()
{   int num_grade;

    printf("Enter numerical grade: ");
    scanf("%d", &num_grade);

   

    if (num_grade > 100 || num_grade < 0)
    {
        printf("Error , grade limit exceeds.\n");
    }

    else

   {     num_grade = num_grade / 10 ;
    switch (num_grade) {
            case 10: case 9: printf("Letter grade: A\n"); break;
            case 8: printf("Letter grade: B\n"); break;
            case 7: printf("Letter grade: C\n"); break;
            case 6: printf("Letter grade: D\n"); break;
            case 5: case 4: case 3: case 2: case 1: case 0:
                printf("Letter grade: F\n");      break;
            
    default: printf("Error , grade limit exceeds.\n"); break;
    
            
        }
    }   return 0;
}