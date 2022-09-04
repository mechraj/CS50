#include <stdio.h>
#include <cs50.h>
#include<cs50.c>
#include<string.h>

int main(void)
{
    string name=get_string("name: ");
    int output=strlen(name);
    printf("%i\n",output);
}