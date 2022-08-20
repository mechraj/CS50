//Program to print negative numbers
#include <stdio.h>
#include <cs50.h>
#include <cs50.c>

// Function, to be defined later
int get_negative_int();

int main(void)
{
    int i;
    //calling the function with a return value
    i=get_negative_int();
    printf("%i\n",i);
}

//defining the function
int get_negative_int()
{
    int n;
    do
    {
        n=get_int("Negative num: \n");
    }
    while(n<0);
        return n;   
}