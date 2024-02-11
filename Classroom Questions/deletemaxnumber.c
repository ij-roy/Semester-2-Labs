// #include <stdio.h>
// #include <math.h>
// int findmax(int a){
//     int num = a,digit,max =0;
//     while (num>0)
//     {
//         digit = num%10;
//         num = num/10;
//         if (digit>max)
//         {
//             max = digit;
//         }
        
//     }
//     return max;
// }
// int removemax(int a,int b){
//     int num = b,max = a,ij = 0,digit,new = 0;
//     while (num>0)
//     {
//         digit = num %10 ;
//         num = num /10;
//         if (digit==max)
//             continue;
//         else{
//             new = digit + (int)(new*pow(10, ij));
//             ij++;
//         }
        

//     }
    
//     return new;
// }
// int main(){
//     int num,max,new;
//     scanf("%d",&num);
//     max = findmax(num),
//     new = removemax(max,num);
//     printf("%d",new);
//     return 0;
// }
// #include <stdio.h>
// #include <math.h>

// int findmax(int a) {
//     int num = a, digit, max = 0;
//     while (num > 0) {
//         digit = num % 10;
//         num = num / 10;
//         if (digit > max) {
//             max = digit;
//         }
//     }
//     return max;
// }

// int removemax(int a, int b) {
//     int num = b, max = a, ij = 0, digit, new = 0;
//     while (num > 0) {
//         digit = num % 10;
//         num = num / 10;
//         if (digit == max)
//             continue;
//         else {
//             new = digit + (int)(new * pow(10, ij));
//             ij++;
//         }
//     }
    
//     return new;
// }

// int main() {
//     int num, max, new;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     max = findmax(num);
//     new = removemax(max, num);
//     printf("%d\n", new);
//     return 0;
// }
#include <stdio.h>
#include <math.h>

int findmax(int a) {
    int num = a, digit, max = 0;
    while (num > 0) {
        digit = num % 10;
        num = num / 10;
        if (digit > max) {
            max = digit;
        }
    }
    return max;
}

int removemax(int a, int b) {
    int num = b, max = a, ij = 0, digit, new = 0;
    while (num > 0) {
        digit = num % 10;
        num = num / 10;
        if (digit == max)
            continue;
        else {
            new = new + (digit * pow(10, ij));
            ij++;
        }
    }
    
    return new;
}

int main() {
    int num, max, new;
    printf("Enter a number: ");
    scanf("%d", &num);
    max = findmax(num);
    new = removemax(max, num);
    printf("%d\n", new);
    return 0;
}
