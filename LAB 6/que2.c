/*
Q2. Write a program to find the minimum of 2 positive numbers without
comparing the numbers, a and b.
a) Extend this to minimum of 3 positive numbers
b) Extend this to minimum of n positive numbers
*/
#include <stdio.h>
int min(int x,int y){
    int dif = x-y;
    if (dif>0)
    {
        return y;
    }else{
        return x;
    }
}
int main(){
    int a,b;
    printf("How Many Numbers You Want to Check : ");
    scanf("%d",&a);
    int arr[a];
    printf("Enter Space seperated %d integers : ",a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&b);
        arr[i] = b;
    }
    int pm = arr[0];
    for(int i=1;i<10;i++){
        pm = min(pm,arr[i]);
    }
    printf("%d",pm);
    return 0;
}
