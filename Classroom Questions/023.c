/*
Recursion Tree
                    run(3)          Output 123..n
                    /   \
                   3     run(2)
                          /    \
                         2     run(1)
                                /   \
                               1    run(0)
*/
#include <stdio.h>
void run(int a){
    if (a==0)
    {
        return;
    }
    printf("%d",a);
    run(a-1);    
}
int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    run(num);
    return 0;
}