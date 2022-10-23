//program to compute weight of  a box for a shipping  company.

#include <stdio.h>
 int main (void)
 {
    int height,length,width,volume,weight;  //intializing variables
    //getting input from the user
   printf("Height: \n" );
   scanf("%i", &height);
  
   printf("Length: \n" );
   scanf("%i", &length);
    
   printf("Width: \n");
   scanf("%i", &width);
    
   

    //printing out the output
    printf("Dimensions: %i %i %i\n",height,length,width);
    printf("Volume (Cubic Inches): %i\n", volume=height * width* length);
    weight=printf("Dimensional Weight (pounds): %i\n",(volume+165)/166);

 }