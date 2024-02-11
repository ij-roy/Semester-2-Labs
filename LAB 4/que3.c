/*
Q3: Write a function to accept 20 characters from the character set, and to display whether the number of lower-case characters is 
greater than, less than, or equal to number of upper-case characters. Display an error message if the input is not an alphabet.
*/
#include<stdio.h>
#include<string.h>
int main(){
    int lower = 0,upper =0;
    char a[20];
    scanf("%s",a);
    for (int i = 0; i < strlen(a); i++)
    {
        if (a[i]<='Z'&&a[i]>='A')
        {
            upper+=1;
        }else if (a[i]<='z'&&a[i]>='a')
        {
            lower+=1;
        }else{
            printf("Invalid Input");
            break;
        }
    }
    upper>lower?printf("uppercase is more than lowercase i.e. %d and lowercase letter is %d",upper,lower):printf("lowercase is more than uppercase i.e. %d and uppercase letter is %d",lower,upper);
    return 0;
}