/*
WAP to add 3 number using recursion
*/
#include <stdio.h>
int add(int n,int sum){
    if (n == 4)
    {
        return sum;
    }
    else{
        int a;
        printf("Enter Number %d : ",n);
        scanf("%d",&a);
        sum = sum + a;
        return add(n+1,sum);
    }
}
int main(){
    int n = 1,result = 0;
    result = add(n,result);
    printf("Sum of the 3 numbers is : %d",result);
    return 0;
}