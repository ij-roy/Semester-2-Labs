/*
2. Write a program to check whether the entered year is leap year or not (a year is leap
if it is divisible by 4 and divisible by 100 or 400.) 
*/
#include <stdio.h>
int main(){
    int n;
    printf("Enter The Year : ");
    scanf("%d",&n);
    printf("The Year %d is ",n);
    if (n%100 == 0)
    {
        if (n%400 != 0)
        {
            printf("not a Leap Year");
        }
        else
        printf("a Leap Year");
    }
    else if (n % 4 == 0)
    {
        printf("a Leap Year");
    }
    return 0;
}
