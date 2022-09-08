#include <stdio.h>
#include <cs50.h>
#include <cs50.c>

int main(void)
{
    string names[]={"ron", "harry","mike","john"};

    for (int i=0; i<4;i++)
    {
        if (names[i]=="harry")
        {
            printf("Found.!");
            return 0;
        }
    }
    printf("Not found.");
    return 1;
}