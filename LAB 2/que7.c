/*
1.	WAP to find greater of two number. The printf statements must also be part of the operand.
*/
#include<stdio.h>
int main(){
    int a,b;
    scanf("%d-%d",&a,&b);
    printf("The Greater Number Is : ");
    a>b?printf("%d",a):printf("%d",b);
    return 0;
}
