//program to check ehether a number is even or add
#include <stdio.h>
#include <cs50.h>
#include <cs50.c>

int main(void)
{
    //prompt user for a number
    int n=get_int("Enter a number: ");
    //check whether its even
    if (n%2==0)
    {
        printf("Its a even number.");
    }
    else
    {
        printf("Its an odd number.");
    }
}