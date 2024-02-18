/*
WAP to find n^k using recursion.
*/
#include <stdio.h>
int power(int a , int b){
    if(b ==1)
        return a;
    else
        return a*power(a,b-1);
}
int main(){
    int result,n,k;
    printf("Enter The Values Of n & k : ");
    scanf("%d%d",&n,&k);
    result= power(n,k);
    printf("The Value of %d^%d is %d",n,k,result);
    return 0;
}