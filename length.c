//Program to determine the length of a string
#include <stdio.h>
#include <cs50.h>
#include <cs50.c>

//Function to count the length of a string//
int string_length(string s);

//main program//
int main(void)
{
    //Ask user for name
    string name=get_string("Name: ");
    int i= string_length(name);
    printf("The length of the enterd string is, %i\n ",i);
    }

// Defining the length function //
int string_length(string s)
{
    int i=0;
    while(s[i]!='\0')
    {
        i++;
    }
    return i;
}