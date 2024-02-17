/*
WAP to swap two numbers using a function.Call that function with 2 int values.
*/
#include <stdio.h>
void swap(int*,int*);
int main(){
    int a,b;
    printf("Enter 2 numbers : ");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}
void swap(int *a , int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}