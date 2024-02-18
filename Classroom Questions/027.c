/*
Find max num using recursion.
*/
#include <stdio.h>
int maximum(int max , int k , int n){
    if (n == k)
    {
        return max;
    }
    else{
        int a;
        printf("Enter number %d : ",n);
        scanf("%d",&a);
        if (max<a)
        {
            max = a;
        }
        return maximum(max,k,n+1);
    }
}
int main(){
    int max = -2147483647 - 1,k,n=1;
    printf("For how many numbers you want to check : ");
    scanf("%d",&k);
    // printf("%d",max);
    max = maximum(max,k+1,n);
    printf("The Maximum of these %d number is %d",k,max);
    return 0;
}