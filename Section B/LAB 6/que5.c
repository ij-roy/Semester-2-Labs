/*
5. Write a program in C to convert a decimal number to a binary number using the function.
Test Data :Input any decimal number : 65
Expected Output :The Binary value is : 1000001
*/
#include <stdio.h>
int binary(int a){
    int pow = 1 , digit , bin  = 0;
    while (a>0)
    {
        digit = a%2;
        bin = bin + (digit*pow);
        pow = pow * 10;
        a = a/2;
    }
    return bin;
}
int main(){
    int a,bin;
    printf("Enter a Decimal number : ");
    scanf("%d",&a);
    bin = binary(a);
    printf("Its Binary Conversion is %d",bin);
    return 0;
}
