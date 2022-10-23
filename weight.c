//program to compute weight of  12" x 10" x8" box.

#include <stdio.h>
 int main (void)
 {
    int height,length,width,volume,weight;  //intializing variables
    height = 8;
    length=12;
    width=10;
    
    //Calculating volume
    volume= height*length*width;
    weight= (volume+165)/166;

    //printing out the output
    printf("Dimensions: %i %i %i\n",height,length,width);
    printf("Volume (Cubic Inches): %i\n", volume);
    printf("Dimensional Weight (pounds): %i\n",weight);

 }