/*
3. Write a program to determine whether the input character is capital or small letter,
digits or special symbol (if else and switch case). 
*/
#include <stdio.h>
int main(){
    printf("Enter The Char : ");
    char stri;
    scanf("%c",&stri);
    printf("%c is ",stri);
    stri>=65 && stri<=90?printf("an UpperCase Character"):(stri>=97&&stri<=122)?printf("a Lowercase Character"):printf("a Special Symbol");
    return 0;
}
