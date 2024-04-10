/*
2. Write a C program to check whether a number is even or odd using functions. 
*/
#include <stdio.h>
int check(int x){
    if (x%2 == 0)
    {
        return 1;
    }else
        return 0;
    
}
int main(){
    int a;
    printf("Enter a Number : ");
    scanf("%d",&a);
    int b = check(a);
    switch (b)
    {
    case 1:
        printf("Number is Even");
        break;
    
    default:
        printf("Number is Odd");
        break;
    }
    return 0;
}
