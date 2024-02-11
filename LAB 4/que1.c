/*
Q1: Create a simple C program which prints all the odd numbers between 1 to 100.
*/
#include<stdio.h>
int main(){
    for (int i = 1; i < 100; i+=2)
    {
        printf("%d\n",i);
    }
    
    return 0;
}