/*
WAP to find Sum Of Digits Of A Number !
*/
#include <stdio.h>
int main(){
    int n , digit ,sum = 0;
    printf("Enter A Integer : ");
    scanf("%d",&n);
    while (n)
    {
        digit = n %10 ;
        sum += digit;
        n = n/10;
    }
    printf("The Sum Of Its Digits Is : %d",sum);
    return 0;
} 