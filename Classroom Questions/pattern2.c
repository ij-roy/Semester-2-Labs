#include <stdio.h>
int main(){
int input;
// int d = input;
    scanf("%d",&input);
    for (int i = 0; i <= input; i++)
    {   
        for (int k = input -i ;k > 0; k--)
        {
            printf(" ");
        }
        int num = 1;
        for (int j = 0; j <= i; j++)
        {
            printf("%d",num);
            num +=1;
        }
     printf("\n") ;  
    }
    
    return 0;

}