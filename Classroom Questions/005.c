/*
Comma Operator
*/
#include <stdio.h>
int main(){
    int i,j,z;
    i = (j = 2, j+=3,i = 4,z = j+2);
    printf("%d",i);
    return 0;
}