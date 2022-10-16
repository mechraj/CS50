//program to compare strings
#include<stdio.h>
#include<cs50.h>
#include<cs50.c>

int main(void)
{
    char *s=get_string("Enter a word: \n");
    char *t =get_string("Enter a word : \n");

    if (strcmp(s,t)==0)
    {
        printf("Its a match\n");
    }
    else
    {
        printf("These 2 are different words.\n");
    }
    
    printf("%p\n",s);  
    printf("%p\n",t);
}