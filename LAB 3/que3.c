/*
3.	Write a loop to divide the first 10 integers with a number k and print the result each time the division takes place. 
The number k is to be input by the user. Notice, if k ==0, then 
a.	Use break. What is the result
b.	Use continue. What is the result.

*/
#include<stdio.h>
int main(){
    int k ;
    float p;
    printf("Enter The Number N : ");
    scanf("%d",&k);
    for (int i = 1; i <= 10; i++)
    {
        /* code */
        if (k==0)
        {
            /* code */
            printf("Number Cant Be Divided By Zero");
            //continue;
            break;
        }
        
        p = (float)i/k;
        printf("%d divide by %d is %f\n",i,k,p);
    }
    
    return 0;
}