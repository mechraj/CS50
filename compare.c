#include<stdio.h>
#include<cs50.h>
#include<cs50.c>

int main(void)
{
    int num1=get_int("Enter a number: \n");
    int num2=get_int("Enter a number: \n");

    if (num1==num2)
    {
        printf("Its a match");
    }
    else
    {
        printf("These 2 are different numbers.");
    }
    
}