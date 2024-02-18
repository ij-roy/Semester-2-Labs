/*
Recursion Tree
                    run(3)          Output 123..n
                    /   \
                run(2)   3
                /    \
            run(1)    2
             /   \
         run(0)   1
*/
#include <stdio.h>
void run(int a){
    if (a==0)
    {
        return;
    }
    run(a-1);
    printf("%d",a);
}
int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    run(num);
    return 0;
}