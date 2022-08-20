#include <stdio.h>
#include <cs50.h>
#include <cs50.c>

int main(void)
{
    //Creating a list to store scores and getting inputs from the user
    
    int scores[3];
    
    for( int i=0;i<3;i++)
    {
        scores[i]=get_int("Scores: ");
    }
    printf("The average is, %f",(scores[0]+scores[1]+scores[2])/3.0);
}
