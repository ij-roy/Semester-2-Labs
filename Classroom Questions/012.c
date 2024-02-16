/*
WAP to define n^k take both n and k from users !
*/
#include <stdio.h>
int main(){
    int n ,k,product = 1,i = 0;
    printf("Enter n power k seperated by spaces : ");
    scanf("%d %d",&n,&k);
    while (i<k)
    {
        product = product*n;
        i++;
    }
    printf("value of %d power %d is %d",n,k,product);
    return 0;
}