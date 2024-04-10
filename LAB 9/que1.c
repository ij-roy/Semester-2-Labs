/*
Q1. Write a program to add two 2*2 matrices
*/
#include<stdio.h>
void addition(int matrix1[2][2],int matrix2[2][2],int sum[2][2]){
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}
int main(){
    int matrix1[2][2],matrix2[2][2],sum[2][2];
    printf("Enter elements of 1st matrix : ");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d",&matrix1[i][j]);
        }
    }
    printf("Enter elements of 2nd matrix : ");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d",&matrix2[i][j]);
        }
    }
    addition(matrix1,matrix2,sum);
    // printf("%d",sum);
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d  ",sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}   