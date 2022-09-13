//program to find phonenumbers from the name//
#include <stdio.h>
#include <cs50.h>
#include <cs50.c>
#include <string.h>

int main(void)
{
    //initializing empty list with names//
    string names[]={"David","Carter"};
    //Corresponding lists with numbers//
    string numbers[]={"+1-617-495-1000", "+1-949-468-2750"};

    //looping through the list 
    for(int i=0;i<2;i++)
    {
        //comparing the names//
        if(strcmp(names[i],"David")==0)
        {
            printf("Found %s\n", numbers[i]);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}
