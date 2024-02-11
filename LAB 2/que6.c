/*
4.	WAP to swap two integer numbers using bitwise operators.
*/
#include<stdio.h>
int main(){
    int i,j;
    printf("Enter i,j : ");
    scanf("%d%d",&i,&j);
    i = i^j;
    j = i^j;
    i = i^j;
    printf("Value Of i ,j : %d,%d",i,j);
    return 0;
}