/*
4. Write a program to swap values of two variables with and without using third variable
*/
#include <stdio.h>
int main(){
    int a , b,c;
    printf("Enter Values of a and b : ");
    scanf("%d%d",&a,&b);
    //With variable
    c = a;
    a = b;
    b = c;
    printf("Value of a is %d and b is %d\n",a,b);
    //Without variable
    a = a + b;
    b = a - b;
    a = a - b;
    printf("Value of a is %d and b is %d",a,b);
    return 0;
}
