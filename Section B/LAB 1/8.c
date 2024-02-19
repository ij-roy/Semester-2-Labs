/*
8. Write a program to find the largest of three numbers using ternary operators. 
*/
#include <stdio.h>
int main(){
    int a,b,c,max;
    printf("Enter three numbers : ");
    scanf("%d%d%d",&a,&b,&c);
    max = a>b?a>c?a:c:b>c?b:c;
    printf("The Greatest Number is : %d",max);
    return 0;
}
