//program to check whether the address to a string is same as the address of the first charcter
#include<stdio.h>
#include<cs50.h>
#include<cs50.c>

int main(void)
{
    string s="Hi!"; //assigning string to a variable
    char *c=s[0]; //adding a pointer to check the location of the first word in string
    printf("%p\n",c); //prints the location of character c
    printf("%p\n",s); //prints the location of string s


}