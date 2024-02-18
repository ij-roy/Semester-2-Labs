/*
Recursion Tree
                               run(3) -> run(2)          Output n(n-1)(n-2)..(n-2)...(n-1)(n-2)..(n-2)
                    /               \      
                   3                  run(2)      
                            /        /         \
                           2       run(1)        run(1)
                                /   \    \         /  \      \
                               1   run(0) run(0)  1   run(0)  run(0)
*/
#include <stdio.h>
void run(int a){
    if (a==0)
    {
        return;
    }
    printf("%d",a);
    run(a-1); 
    run(a-1)   ;
}
int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    run(num);
    return 0;
}