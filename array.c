#include <stdio.h>
#include <cs50.h>
#include <cs50.c>

int main(void)
{
    //Creating a list to store scores
    int scores[3];
    scores[0]=50;
    scores[1]=75;
    scores[2]=50;
    
    printf("The sum is,%f", (scores[0]+scores[1]+scores[2])/3.0);
}
