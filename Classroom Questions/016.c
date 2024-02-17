/*
WAP to check for primr number.
*/
#include <stdio.h>
int main(){
    int num,prime = 1;
    printf("Enter an integer : ");
    scanf("%d",&num);
    if (num<2)
    {
        prime = 0;
    }
    
    for (int i = 2; i <= num/2; i++)
    {
        if(num % i == 0){
            prime = 0;
            break;
        }
    }
    if (prime)
    {
        printf("%d is a Prime Number",num);
    }else{
        printf("%d is not a Prime Number",num);
    }
    return 0;
}