//program to print strings as an individual character//
#include <stdio.h>
#include <cs50.h>
#include<cs50.c>
#include<string.h>

int main(void)
{
    //get input from the user//
    string name=get_string("name: ");
    //prints the output
    printf("output: ");
    
    for (int i=0;i<strlen(name);i++ )
    {
        printf("%c\n",name[i]);
    }

}