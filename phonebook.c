//program to find phonenumbers from the name//
#include <stdio.h>
#include <cs50.h>
#include <cs50.c>
#include <string.h>

//defining a new data structure//
typedef struct
{
    string name;
    string number;
}
person;

int main(void)
{
    person people[2];
    {
        //first set of entry into the new data structure//
        people[0].name="David";
        people[0].number="+1-617-495-1000";

        //second entry
        people[1].name="David";
        people[1].number= "+1-949-468-2750";

    }

    //looping through the list 
    for(int i=0;i<2;i++)
    {
        //comparing the names//
        if(strcmp(people[i].name,"David")==0)
        {
            printf("Found %s\n", people[i].number);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}
