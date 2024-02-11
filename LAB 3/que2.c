/*
2.	Write a menu driven program using switch case statement. Take a number, n, from the user. Take a choice from the user to do the 
following:
1: to find if n is odd or even
2: to find if n is a prime number (use break statement) 
3: to find the factorial of n
4: exit

*/
#include<stdio.h>
int main(){
    int n,c,fact;
    fact = 1;
    printf("Enter The Value In The Form Case-number\n");
    scanf("%d-%d",&c,&n);
    switch (c)
    {
    case 1:
        /* code */
        if (n%2==0)
        {
            /* code */
            printf("%d is A Even Number",n);
        }else{
            printf("%d is A Odd Number",n);
        }
        
        break;
    case 2:
        for (int i = 2; i < (n/2)+1; i++)
        {
            /* code */
            if(n%i==0){
                printf("%d is a Composite Number",n);
                break;
            }else if (i==n/2)
            {
                /* code */
                printf("%d is a Prime Number",n);
                break;
            }
            
        }break;
    case 3:
        for (int i = 1; i < n+1; i++)
        {
            /* code */
            fact = fact*i;

        }
        printf("factorial of %d is %d ",n,fact);
            break;
    default:
        printf("thanks You For Your Time");
        break;
    }
    return 0;
}