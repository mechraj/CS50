//Program to determine the length of a string
#include<stdio.h>
#include<cs50.h>
#include<cs50.c>
#include<string.h>

int main(void)
{
    //asking user for the input
    string name=get_string("Name: ");
    
    //printing output
    printf("Output: \n");

    //looping through the input to print each character
    for (int i=0; i<strlen(name) ; i++)
    {
        printf("%c\n",name[i]);
    }


    


}
