/*
Create an infinite loop to check all even no between 1 & 21 . If the value is even display it otherwise 
continue the loop use break to terminate.
*/
#include <stdio.h>
int main(){
    for (int i = 1;; i++)
    {
        if (i == 21) break;
        else if (i%2 == 0)
        {
            printf("%d\n",i);
        }   
    }
    return 0;
}