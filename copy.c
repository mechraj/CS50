//program to copy string

#include<stdio.h>
#include<cs50.h>
#include<cs50.c>

int main(void)
{
    string s=get_string("Enter a word");
    string t= s;
    t[0]=toupper(t[0]);

    printf("s=%s\n",s);
    printf("t= %s\n",t);

}