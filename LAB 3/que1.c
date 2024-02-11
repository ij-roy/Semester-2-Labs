/*
1.	You have to generate a 6-digit OTP. Each digit of the six-digit number is to be generated randomly. 
Use the in-built random function for this.
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    printf("Your 6 Digit OTP is : ");
    for (int i = 0; i < 6; i++)
    {
        /* code */
        printf("%d",rand()%10);
    }
    
    return 0;
}
