/*
4. Write a program to find whether a character is consonant or vowel using switch
statement.
*/
#include <stdio.h>
int main(){
    char c;
    printf("Enter a character : ");
    scanf("%c",&c);
    switch (c)
    {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
        printf("%c is a vowel",c);
        break;
    default:
    if ((c>=65 && c<=90) || (c>=97&&c<=122))
    {
        printf("%c is a consonant",c);
    }else{
        printf("%c is not an alphabet",c);  
        break;
    }
    }
    return 0;
}
