// computes the dimensional weight of a box from input provided by the user.


#include <stdio.h>

// eg
   int main(void){

    int height, width, length, volume, weight;

    printf("Enter height of box: ");
    scanf("%d", &height);

     printf("Enter width: ");
    scanf("%d", &width);

     printf("Enter length: ");
    scanf("%d", &length);
    
    volume = (height) * (length) * width;
    weight = (volume + 165) / 166;
    printf("Dimensions: %dx%dx%d \n", length, width, height);
   printf("Volume(cubic inches): %d\n", volume);
   printf("Dimesnional weigth(pounds): %d\n",weight);
   return 0;
   }