/*
3. Write a C program to check whether a number is prime, Armstrong or perfect number using
functions. 
*/
#include <stdio.h>
int prime(int a){
    for (int i = 2; i < a; i++)
    {
        if (a%i == 0)
        {
            printf("Number is Composite");
            break;
            return 0;
        }else if (i > (a/2)+1)
        {
            printf("Number is Prime");
            return 1;
        }        
    }   
}
int armstrong(int a){
    int sum  = 0, digit, b = a ;
    while (a>0)
    {
        digit = a % 10;
        sum = sum + (digit*digit*digit);
        a = a/10;
    }
    if (sum == b)
    {
        printf("Number is Armstrong");
        return 1;
    }else{
        printf("Number is not an Armstrong");
        return 0;
    }  
}
int perfect(int a){
    int sum = 0;
    for (int i = 1; i < a; i++)
    {
        if (a%i == 0)
        {
            sum = sum + i;
        }
        
    }
    if (sum == a)
    {
        printf("Number is Perfect");
        return 1;
    }else{
        printf("Number is Not Perfect");
        return 0;
    }
    
}
int main(){
    int a;
    int x,y,z;
    printf("Enter a number : ");
    scanf("%d",&a);
    prime(a);
    printf("\n");
    armstrong(a);
    printf("\n");
    perfect(a);
    // for (int i = 0; i < 100000000; i++)
    // {
    //     x = prime(i);
    //     y = armstrong(i);
    //     z = perfect(i);
    //     if (x== 1 && y == 1 && z == 1)
    //     {
    //         printf("%d\n",i);
    //     }
        
    // }
    return 0;
}
