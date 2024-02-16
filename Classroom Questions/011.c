/*
WAP to find sum of 1st 10 natural numbers using While.
*/
#include <stdio.h>
int main(){
    int sum = 0 ,a ;
    while (a<=10)
    {
        sum = sum +a;
        a += 1;
    }
    printf("%d",sum);
    return 0;
}