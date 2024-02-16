/*
WAP to print all the aski values of all the characters 
*/
#include <stdio.h>
int main(){
    for (int i = 0; i <= 256; i++)
    {
        printf("askii value of %c is %d\n",i,i);
    }
    
    return 0;
}