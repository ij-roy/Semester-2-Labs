/*
Q3. Write a program to find the sum of the diagonal elements of a matrix.
*/
#include <stdio.h>
int main(){
    printf("Enter the order of the matrix : ");
    int a,b;
    scanf("%d%d",&a,&b);
    int arr[a][b];
    int sum = 0;
    printf("Enter elements of your %dx%d matrix : ",a,b);
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            scanf("%d",&arr[i][j]);
            if (i == j)
            {
                sum += arr[i][j];
            }
            
        }
    }
    printf("The sum of its Diagonal elements are %d",sum);
    return 0;
}