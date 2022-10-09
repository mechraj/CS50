//program to check whether the address to a string is same as the address of the first charcter
#include<stdio.h>
#include<cs50.h>
#include<cs50.c>

int main(void)
{
    string s="Hi!"; //assigning string to a variable
    char *p=&s[0];
    printf("%p\n",p); //prints the location of character c
    printf("%p\n",s); //prints the location of string s

    //checking addres of all characters
    printf("%p\n",&s[1]);
    printf("%p\n",&s[2]);
    printf("%p\n",&s[3]);


}