//program to check whether the user agrees or not
#include <stdio.h>
#include<cs50.h>
#include <cs50.c>

int main (void)
{
    //propmt user the question
    char ans= get_char("Do you agree.? ");

    //actions
    if(ans=='y' || ans=='Y')
    {
        printf("Agreed.\n");
    }
    else if(ans=='n' || ans=='N')
    {
        printf("Not agreed.\n");
    }
}