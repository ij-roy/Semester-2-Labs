/*
WAP if user keys in r print red b --> blue ; 
*/
#include <stdio.h>
int main(){
    char c;
    scanf("%c",&c);
    switch (c)
    {
    case 'r':
    case 'R':
        printf("RED");
        break;
    case 'b':
    case 'B':
        printf("Blue");
        break;
    default:
        printf("No Output");
        break;
    }
    return 0;
}