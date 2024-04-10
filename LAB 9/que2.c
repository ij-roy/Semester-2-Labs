/*
Q2. Write a program to add two 3*3 matrices
*/
#include<stdio.h>
void addition(int matrix1[3][3],int matrix2[3][3],int sum[3][3]){
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }   
    }
}
int main(){
    int matrix1[3][3],matrix2[3][3],sum[3][3];
    printf("Enter elements of 1st matrix : ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d",&matrix1[i][j]);
        }
    }
    printf("Enter elements of 2nd matrix : ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d",&matrix2[i][j]);
        }
    }
    addition(matrix1,matrix2,sum);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d  ",sum[i][j]);
        }   
        printf("\n");
    }
    return 0;
}