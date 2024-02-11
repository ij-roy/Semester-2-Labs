/*
Q4.  WAP to find the size of int, float, double, char, long signed int, long unsigned int, short int. 
*/
#include<stdio.h>
int main(){
    printf("Size of Int : %lu bytes\n",sizeof(int));
    printf("Size of Float : %lu bytes\n",sizeof(float));
    printf("Size of Double : %lu bytes\n",sizeof(double));
    printf("Size of char : %lu bytes\n",sizeof(char));
    printf("Size of long Signed : %lu bytes\n",sizeof(long int));
    printf("Size of long Unsigned : %lu bytes\n",sizeof(long unsigned));
    printf("Size of Short : %lu bytes\n",sizeof(short int));
   // printf("Size of Short Unsigned : %lu bytes\n",sizeof(short unsigned));
    return 0;
}