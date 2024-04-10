/*
Q2. Repeat Q1, but this time find the maximum using a pointer to the array.
*/
#include<stdio.h>
int main()
{
	int arr[5]={20,10,21,34,8};
	int *max=&arr[0];

    for (int j = 1; j < 5; j++) {
        if (*max < arr[j]) {
            max = &arr[j];
        }
    }
	printf("\nMaximum number is: %d\n", *max);
    return 0;
}