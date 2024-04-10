/*
Q4. Write a program to add, subtract two integer numbers using the concept of
pointers to functions. For this create two functions add and subtract.
*/
#include <stdio.h>
void add (int*a,int*b){
    printf("sum of a and b %d is ",*a + *b);
    }
void subtract (int *a,int *b){

    printf("difference of a and b is %d",*a-*b);
}
int main() {
    int a,b;
    printf("a and b is = ");
    scanf("%d %d",&a,&b);
    add (&a,&b);
    subtract(&a,&b);
    return 0;
}