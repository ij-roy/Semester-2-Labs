/*
WAP to add n integers using recursion. Take n from user.
*/
#include <stdio.h>
int add(int n,int sum,int k){
    if (n == k)
    {
        return sum;
    }
    else{
        int a;
        printf("Enter Number %d : ",n);
        scanf("%d",&a);
        sum = sum + a;
        return add(n+1,sum,k);
    }
}
int main(){
    int n = 1,result = 0,k;
    printf("How many numbers you want to add : ");
    scanf("%d",&k);
    result = add(n,result,k+1);
    printf("Sum of the %d numbers is : %d",k,result);
    return 0;
}