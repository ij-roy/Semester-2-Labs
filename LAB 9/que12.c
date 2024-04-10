// Q12. Write a function to generate unique sequential IDs starting from 1. Your main method should call this method 10 times in a loop to generate 10 unique sequential IDs. Use the concept of static storage class.
#include <stdio.h>

int generateID()
{
    static int id = 0;
    return ++id;
}

int main()
{
    for (int i = 0; i < 10; i++)
    {
        printf("Generated ID: %d\n", generateID());
    }
    return 0;
}
