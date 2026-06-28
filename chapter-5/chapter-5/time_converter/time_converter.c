// A command-line C program that converts time from 24-hour format to 12-hour (AM/PM) format.

#include <stdio.h>

int main()
{ int hours, minutes;
    printf("Enter a 24-hour time: ");
    scanf("%2d:%2d", &hours, &minutes);

    if ((hours < 0 || hours >= 24) || (minutes < 0 || minutes > 59))
        printf("Not a valid input as std time in 24- hour format ends at 23:59\n");

    else if ( hours == 0)
        printf("Equivalent 12-hour time: %d:%02d AM\n", 12, minutes);

    else if (hours > 0 && hours < 12)
        printf("Equivalent 12-hour time: %d:%02d AM\n", hours, minutes);
        
    else if (hours == 12)
        printf("Equivalent 12-hour time: %d:%02d PM\n", hours, minutes);

    
    else if (hours > 12 && hours < 24)
        printf("Equivalent 12-hour time: %d:%02d PM\n", hours - 12, minutes);
    
    


      return 0;
}