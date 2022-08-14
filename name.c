#include <stdio.h>
#include <cs50.h>
#include <cs50.c>

int main(void)
{
    string answer= get_string("Enter your name.?\n");
    printf("Hello %s", answer);
}