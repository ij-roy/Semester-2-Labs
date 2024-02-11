/*
3.	WAP to find greater of three numbers using ternary operator. All the three numbers must be taken in from the user.
*/
#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d-%d-%d",&a,&b,&c);
    printf("The Greatest Number is : ");
    //(a>b)?(a>c?printf("%d",a):printf("%d",c)):(a<c?printf("%d",c):printf("%d",a)):(b>c?printf("%d",b):printf("%d",c)):(b<c?printf("%d",c):printf("%d",b));
    a>b?(a>c?(printf("%d",a)):(printf("%d",c))):(b>c?(printf("%d",b)):(printf("%d",c)));
    return 0;
}
