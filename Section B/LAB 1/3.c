/*
3. Write a program to calculate simple and compound interest.
*/
#include <stdio.h>
#include <math.h>
int main(){
    int principal;
    float rate,time,n;
    printf("Enter Principal Amount : ");
    scanf("%d",&principal);
    printf("Enter Rate : ");
    scanf("%f",&rate);
    printf("Enter Time In Years : ");
    scanf("%f",&time);
    float simpleinterest = (float)(principal*rate*time)/100;
    printf("Simple Interest is : %.1f\n",simpleinterest);
    printf("Final Amount After %.1f Years is : %.1f\n",time,principal+simpleinterest);
    printf("Enter the Value of n : ");
    scanf("%f",&n);
    rate /= 100;
    float compoundinterest =  (float)principal * pow(1+ (rate/n) , n*time);
    printf("The Amount After Compound Interest is %.1f",compoundinterest);
    return 0;
}