#include <stdio.h>
int main()

{   int time_in_minutes, hours, minutes;
    printf("Enter a 24-hour time: ");
    scanf("%2d:%2d", &hours, &minutes);

    if ((hours >= 24 || hours < 0 ) ||  (minutes >= 60 || minutes < 00)){
        printf("Invalid time format entered.\n");
    }

    else 

        {time_in_minutes = hours * 60 + minutes;

        if (time_in_minutes < 532 && time_in_minutes >= 0){
            printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.\n");
        }

        else if (time_in_minutes >= 532 && time_in_minutes <= 631){
            printf("Closest departure time is 9:43 a.m., arriving at 11:52 a.m.\n");
        }

        else if (time_in_minutes > 631 && time_in_minutes <= 723){
            printf("Closest departure time is 11:19 a.m., arriving at 1:31 p.m.\n");
        }

        else if (time_in_minutes > 723 && time_in_minutes <= 803){
            printf("Closest departure time is 12:47 p.m., arriving at 3:00 p.m.\n");
        }

        else if (time_in_minutes > 803 && time_in_minutes <= 892){
            printf("Closest departure time is 2:00 p.m., arriving at 4:08 p.m.\n");
        }

        else if (time_in_minutes > 892 && time_in_minutes <= 1042){
            printf("Closest departure time is 3:45 p.m., arriving at 5:55 p.m.\n");
        }

        else if (time_in_minutes > 1042 && time_in_minutes <= 1222){
             printf("Closest departure time is 7:00 p.m., arriving at 9:20 p.m.\n");
        }

        else if (time_in_minutes > 1222 && time_in_minutes < 1440){
             printf("Closest departure time is 9:45 p.m., arriving at 11:58 p.m.\n");
        }


        return 0;
    
    
    
    
    
    
    
    
    
    
    
    
    }
}