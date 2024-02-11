/*
2.	Take a single character as input from the user. WAP to print ‘Uppercase’ if the character entered in uppercase, 
print ‘Lowercase otherwise’.
*/
#include<stdio.h>
int main()
{
    char stri;
    scanf("%s",&stri);
    stri>=65 && stri<=90?printf("UpperCase"):(stri>=97&&stri<=122)?printf("Lowercase"):printf("Not A letter");
    return 0;}