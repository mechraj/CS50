#include <stdio.h>
#include <cs50.h>
#include <cs50.c>

int main(void)
{
    //prompt user for x
    int x=get_int("x:");
    //prompt user for y
    int y=get_int("y:");
    // sum of x&y
    int z=printf("sum: %i ", x+y);
}