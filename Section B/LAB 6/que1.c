/*
1. Write a C program to find maximum and minimum between two numbers using functions. 
*/
#include <stdio.h>
int maximum(int x,int y){
    int max;
    max = x>y?x:y;
    return max;
}
int minimum(int x,int y){
    int min;
    min = x<y?x:y;
    return min;
}
int main(){
    int max,min,a,b;
    printf("Enter Values of a,b : ");
    scanf("%d%d",&a,&b);
    max = maximum(a,b);
    min = minimum(a,b);
    printf("The Maximum Number is %d\n",max);
    printf("The Minimum Number is %d\n",min);
    return 0;
}
