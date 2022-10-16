#include<stdio.h>
#include<cs50.h>
#include<cs50.c>

int main(void)
{
    char *s=get_string("Enter a word: \n");
    char *t =get_string("Enter a word : \n");

    if (s==t)
    {
        printf("Its a match");
    }
    else
    {
        printf("These 2 are different words.");
    }
    
}