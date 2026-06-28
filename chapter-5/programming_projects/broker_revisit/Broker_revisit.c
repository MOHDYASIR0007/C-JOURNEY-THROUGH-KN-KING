#include <stdio.h>
int main()
{
    int no_shares;
    float rival_commission, price, original_commission, trade_value;
    

    printf("Enter the number of shares: ");
    scanf("%d", &no_shares);

    printf("Enter the price per share:$ ");
    scanf("%f", &price);


    trade_value = price * no_shares;

    if (no_shares < 2000)
        rival_commission = 33.00f + (.03f) * (no_shares);

    else if (no_shares >= 2000)
        rival_commission = 33.00f + (.02f) * (no_shares);

        {  if (trade_value < 2500.00f)
                original_commission = 30.00f + .017f * (trade_value);

            else if (trade_value >= 2500.00f && trade_value < 6250.00f)
                original_commission = 56.00f + .0066f * (trade_value);

            else if (trade_value >= 6250.00f && trade_value < 20000.00f)
                original_commission = 76.00f + .0034f * (trade_value);

            else if (trade_value >= 20000.00f && trade_value < 50000.00f)
                original_commission = 100.00f + .0022f * (trade_value);


            else if (trade_value >= 50000.00f && trade_value < 500000.00f)
                original_commission = 155.00f + .0011f * (trade_value);

            else
                original_commission = 255.00f + .0009f * (trade_value);

         }
        
    
    
        printf("Commission charged by Original broker: $%2.2f\n", original_commission);
        printf("Commission charged by Rival's broker : $%2.2f\n", rival_commission);

        return 0;
}
    
        
        


