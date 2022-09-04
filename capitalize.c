//program to capitalize//
#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <cs50.c>
#include <string.h>

int main(void)
{
    //input from user//
    string word=get_string("Input: ");

    //looping through the inputs to convert the letters//
    for(int i=0, n=strlen(word);i<n;i++)
    {
        if(islower(word[i]))
        {
            printf("%c",word[i]-32);
        }
        else
        {
            printf("%c",word[i]);
        }
    }
    printf("\n");
}