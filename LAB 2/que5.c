/*
3.	WAP to swap two integer numbers using a third variable
*/
#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d-%d",&a,&b);
    c = a;
    a = b;
    b = c;
    printf("After Swapping");
    printf("1st integer : %d\n2nd Integer : %d",a,b);
    return 0;
}