/*
WAP that reads a number and deletes the maximum digit.
*/
#include <stdio.h>
int maximum(int a){
    int digit,max = 0;
    for (a;a>0;a /=10)
    {
        digit = a % 10;
        if (digit>max)
        {
            max = digit;
        }
    }   
    return max;
}
int number(int a,int b){
    int result = 0,digit,power = 1;
    for (; a > 0; a/=10)
    {
        digit = a % 10;
        if (digit == b)
        {
            continue;
        }
        result = result + (digit*power);
        power *= 10;
    }
    
    return result;
}
int main(){
    int num ,max ,result;
    printf("Enter an Integer : ");
    scanf("%d",&num);
    max = maximum(num);
    // printf("%d",max);
    num = number(num,max);
    printf("The Result Without The maximun digit is : %d",num);
    return 0;
}