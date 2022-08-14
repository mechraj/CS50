//function to repeat a action n mnumber of times
#include <stdio.h>


void  meow(int n);

int main(void)
{
   
    meow(7);
    
}

void meow(int n)
{
    for (int i=0; i<n;i++)
    {
        printf("meow\n");
    }
}