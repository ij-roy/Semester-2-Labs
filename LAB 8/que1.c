/*
Q1. Write a function that returns the maximum number in an array. The main
method should take the array of integers from the user and print the maximum
number.
*/
#include <stdio.h>
int max(int l[] , int n){
    int m = l[0];
    for (int i = 0; i < n; i++)
    {
        if (l[i] > m)
        {
            m = l[i];
        }
    }
    return m;
}
int main(){
    int n;
    printf("Enter no of elements in array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter Space Seperated %d Elements : ",n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The maximum is %d",max(arr,n));
    return 0;
}
