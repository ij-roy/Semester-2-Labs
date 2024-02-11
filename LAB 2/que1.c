/*
1.	Take as input from the user an integer, float, char, string, octal integer, hexadecimal integer, double. Print the same.
Ensure the complete octal and hexadecimal values are printed.
*/
// #include<stdio.h>
// int main(){

//     return 0 ;
// }
#include<stdio.h>
int main(){
    int a;
    float b;
    char c;
    char d[20];
    double e;
    int hexadecimal;
    int octal;
    printf("Enter: ");
    scanf("%c %f %d %s %lf %x %o",&c,&b,&a,&d,&e,&hexadecimal,&octal);
    printf("%c %f %d %s %lf %x %o",c,b,a,d,e,hexadecimal,octal);
    return 0;
}