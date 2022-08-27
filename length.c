//Program to determine the length of a string
#include <stdio.h>
#include <cs50.h>
#include <cs50.c>

int main(void)
{
    //Ask user for name

    string name=get_string("Name: ");
    //Intializing a variable
    int i=0;
    //checks for a null location
    while(name[i]!='\0')
    {
        i++;
    }
    printf("The number of letters in neme is, %i",i);
}

