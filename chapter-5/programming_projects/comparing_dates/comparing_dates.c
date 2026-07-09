#include <stdio.h>

int main()

{
    int dd1, dd2, mm1, mm2, yy1, yy2;

    printf("Enter first date (mm/dd/yy): ");
    scanf("%d/%d/%d",&mm1, &dd1, &yy1);

    printf("Enter second date (mm/dd/yy): ");
    scanf("%d/%d/%d",&mm2, &dd2, &yy2);

    if ((mm1 > 12 || mm1 <= 0)|| (mm2 > 12 || mm2 <= 0) || (dd1 > 31 || dd1 <= 0) || (dd2 > 31 || dd2 <= 0)){
        printf("Invalid date\n");
    }

    else if (((yy1 % 4 != 0) && (mm1 == 2) && (dd1 > 28)) || ((yy2 % 4 != 0) && (mm2 == 2) && (dd2 > 28)))
    {
        printf("The date input exceeds the range of days available in a month of february\n");
    }

    else if (((yy1 % 4 == 0) && (mm1 == 2) && (dd1 > 29)) || ((yy2 % 4 == 0) && (mm2 == 2) && (dd2 > 29)))
    {
        printf("The date input exceeds the range of days available in a month of february in a leap year.\n");
    }

    else if (((mm1 == 4 || mm1 == 6 || mm1 == 9 || mm1 == 11) && (dd1 > 30)) || ((mm2 == 4 || mm2 == 6 || mm2 == 9 || mm2 == 11) && (dd2 > 30)))
    {
        printf("The date input exceeds the date range available in a month.\n");
    }



    else
    {
        if (yy1 > yy2)
        {
            printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", mm2, dd2, yy2, mm1, dd1, yy1);
        }
        

        else if ((yy1 < yy2))
        {
            printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", mm1, dd1, yy1, mm2, dd2, yy2);
        }


        else if (yy1 == yy2 && mm1 > mm2)
        {
           printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", mm2, dd2, yy2, mm1, dd1, yy1); 
        }

        else if (yy1 == yy2 && mm1 < mm2)
        {
            printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", mm1, dd1, yy1, mm2, dd2, yy2);
        }

        else if (yy1 == yy2 && mm1 == mm2 && dd1 > dd2)
        {
            printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", mm2, dd2, yy2, mm1, dd1, yy1);
        }

        else if (yy1 == yy2 && mm1 == mm2 && dd1 < dd2)
        {
            printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", mm1, dd1, yy1, mm2, dd2, yy2); 
        }

        else {printf("Both dates are same.\n");}
    }


    return 0;

}