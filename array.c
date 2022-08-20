#include <stdio.h>
#include <cs50.h>
#include <cs50.c>

int main(void)
{
    //Creating a list to store scores and getting inputs from the user
    int scores[3];
    scores[0]=get_int("Score 1: ");
    scores[1]=get_int("Score 2: ");
    scores[2]=get_int("Score 3: ");
    
    printf("The sum is,%f", (scores[0]+scores[1]+scores[2])/3.0);
}
