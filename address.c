#include<stdio.h>

int main(void)
{
    int n=50; //initializing a variable
    int *p=&n; //using  a pointer to find the location of the variable n

    printf("%p\n",p); //location of n in the memory
    printf("%i\n",*p); // what is stored in that particular location 
}