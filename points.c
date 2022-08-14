#include <stdio.h>
#include <cs50.h>
#include <cs50.c>

int main(void)
{
   // points Ii scored
    const int MINE=80;
     //prompt user for points
    int points=get_int("How many points did you score. ?\n");

    //compare points with mine
    if (points<MINE)
    {
        printf("You scored less points than me.");
    }
    else if (points==MINE)
    {
        printf("You scored same points as me.");
    }
    else
    {
        printf("You scored more points than me.");
    }
}