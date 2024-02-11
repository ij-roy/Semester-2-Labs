#include <stdio.h>
int main(){
    int input;
    scanf("%d",&input);
    for (int i = 0; i <= input; i++)
    {
        int num = 65;
        for (int j = 0; j < i; j++)
        {
            printf("%c ",num);
            num +=1;
        }
        printf("\n");
    }
return 0;
}