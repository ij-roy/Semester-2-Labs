/*

*/
#include <stdio.h>
int main(){
    int i = 20;
    int * const pi = &i;
    *pi = 10;
    printf("%d %d" , *pi , i);
    return 0;
}
