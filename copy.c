//program to copy string

#include<stdio.h>
#include<cs50.h>
#include<cs50.c>
#include<stdlib.h>

int main(void)
{
    char *s=get_string("s:");
    char *t=malloc(strlen(s)+1);

    for (int i=0, n=strlen(s)+1;i<n;i++)
    {
        t[i]=s[i];
    }
    t[0] = toupper(t[0]);

    printf("s: %s\n", s);
    printf("t: %s\n", t);
}