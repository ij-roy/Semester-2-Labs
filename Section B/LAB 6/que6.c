/*
6. Write a program to calculate sum of first 20 natural numbers using recursive function.
*/
#include <stdio.h>
int sumerr(int sum , int n){
    if (n == 0)
        return sum;
    sum = sum + n;
    sum = sumerr(sum,n-1);
    return sum ;
}
int main(){
    int sum = 0;
    int n = 20;
    sum = sumerr(sum,n);
    printf("%d",sum);
}
