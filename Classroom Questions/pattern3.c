#include <stdio.h>
int main(){
    int input;
    int count =  (2*input) - 1;
    scanf("%d",&input);
    for (int i = 0; i<= (2*input) - 1; i++)
    {
        for (int  k = 0; k < i; k++)
        {
            printf(" ");
        }
        int num = 65;
        for (int j = count - i ; j > 0; j--)
        {
            printf("%c",num);
            num +=1;
        }
        printf("\n");
    }
    
    return 0;
}