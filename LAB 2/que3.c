/*
1.	WAP which reads as input sides of a rectangle and prints its area.
*/
#include<stdio.h>
int main(){
    int len,breadth;
    printf("Type the Length and Breadth In The Form : Length-Breadth\n");
    scanf("%d-%d",&len,&breadth);
    printf("The Area Of The Given Rectangle is : %d",len*breadth);
    return 0;
}