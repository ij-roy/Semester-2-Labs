/*
Q4: Modify the function to accept characters endlessly until the character ‘!’ is input from keyboard.
*/
#include<stdio.h>
int  main(){
    char c;
    // printf("Enter A Char \n");
    while (c!='!')
    {
        printf("Enter A Char \n");
        scanf("\n");
        scanf("%c",&c);
        
    }   
    return 0;
}