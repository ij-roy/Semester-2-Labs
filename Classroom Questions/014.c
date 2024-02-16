/*
Given Integer N Reverse The Number !
*/
#include <stdio.h>
int main(){
    int n ;
    printf("Enter An Integer : ");
    scanf("%d",&n);
    printf("The Reverse Is : ");
    while (n)
    {
        printf("%d",n%10);
        n = n/10;
    }
    return 0;
}