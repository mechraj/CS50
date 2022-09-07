#include <stdio.h>
#include <cs50.h>
#include <cs50.c>

int main(void)
{
    //initializing array with values //
    int numbers[]={4,6,15,7,5,1,8};

    //checking whether the number is in the array//
    for (int i=0;i<7;i++)
    {
        if (numbers[i]==0)
        {
            printf("Found");
            return 0;
        }
    }
    printf("Not found.");
    return 1;
}