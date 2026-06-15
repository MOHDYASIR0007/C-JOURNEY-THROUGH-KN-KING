// Computing the Dimensional weight  12" x 10" x 8" box

#include <stdio.h>

// eg
   int main(void){

    int height, width, length, volume, weight;

    height = 8; //in inches 
    length = 12; //in inches
    width = 10; //in inches
    volume = (height) * (length) * width;
    weight = (volume + 165) / 166;
    printf("Dimensions: %dx%dx%d \n", length, width, height);
   printf("Volume(cubic inches): %d\n", volume);
   printf("Dimesnional weigth(pounds): %d\n",weight);
   return 0;
   }