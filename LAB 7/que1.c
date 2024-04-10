/*
Q1. Write a program to accept 10 numbers from a user in an array. Arrange them
in ascending order. Also find the maximum number in the array.
*/
#include <stdio.h>
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
    printf("Array before Sorting : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    for (int i = 0; i < n; i++){
       int small = arr[i] , idxs = i;
       for (int j = i+1; j < n; j++)
       {
        if (arr[j] < small)
        {
            small = arr[j];
            idxs = j;
        }
        //swapping
        // int temp = arr[i];       
        // arr[i] = arr[idxs];      
        // arr[idxs]=temp;;

        // if(arr[i]>arr[j]){
        //     int temp=arr[i];
        //     arr[i]=arr[j];
        //     arr[j]=temp;
        // }
       }
        arr[idxs] = arr[i];
        arr[i] = small;
    }
    printf("\nArray After Sorting : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\nThe maximum digit is %d",arr[n-1]);
    return 0;
}