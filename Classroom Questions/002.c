/*
WAP to Swap two numbers Using bitwise operator
*/
#include<stdio.h>
int main(){
    int i =20,k = 5;
    i = i^k;
    k = i^k;
    i = i^k;
    printf("%d %d",i,k);
    return 0;
}