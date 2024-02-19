/*
6. Write a program to illustrate the use of unary prefix and postfix increment and
decrement operators. 
*/
#include <stdio.h>
int main(){
    int i = 5;
    printf("%d\n",i);//5
    printf("%d\n",++i);//6
    printf("%d\n",i++);//6
    printf("%d\n",i);//7
    return 0;
}
