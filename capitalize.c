//program to capitalize//
#include <stdio.h>
#include <cs50.h>
#include <cs50.c>
#include <string.h>

int main(void)
{
    //input from user//
    string word=get_string("Input: ");

    //looping through the inputs to convert the letters//
    for(int i=0, n=strlen(word);i<n;i++)
    {
        if(word[i]>='a' && word[i]<='z')
        {
            printf("%c",word[i]-32);
        }
        else
        {
            printf("%c",word[i]);
        }
    }
}