/*
7. Write a program to input two numbers and display the maximum number. 
*/
#include <stdio.h>
int main(){
    int a,b,maximum;
    printf("Enter Two Integers : ");
    scanf("%d%d",&a,&b);
    if (a>b)
    {
        maximum = a;
    }else{
        maximum = b;
    }
    printf("The Greater Number is : %d",maximum);
    return 0;
}
