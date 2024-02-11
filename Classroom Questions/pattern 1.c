// #include <stdio.h>
// int main(){
//     int n = 0;
//     for (printf("1\n") ; printf("2\n"), printf("3\n");printf("4\n"))
//     {   
//         if(n ==3){
//             break;
//         }
//         // printf("Hello World");
//         n = n+1;
//     }
    
//     return 0;
// }
#include <stdio.h>

int main() {
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
    // int k = input-1;
    // int input;
    // scanf("%d",&input);
    // for (int i = 0; i <= input; i++)
    // {   
    //     for (int k = input; k > 0; k--)
    //     {
    //         printf("  ");
    //     }
    //     int num = 1;
    //     for (int j = 0; j <= i; j++)
    //     {
    //         printf("num");
    //         num +=1;
    //     }
        
    // }
    
    return 0;
}