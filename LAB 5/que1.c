/*
Q1. Create two unsigned integer numbers with values 3 and 2. Subtract them. What do you observe?
*/
#include <stdio.h>
int main(){
    unsigned int a = 3;
    unsigned int b = 2;
    unsigned int sub1 = a-b;
    unsigned int sub2 = b-a;
    printf("%d %d",a-b); // 1
    printf("%d",b-a); // 6422356-3
    return 0;
}