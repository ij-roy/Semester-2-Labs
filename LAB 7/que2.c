/*
Q2. Take two strings from the user in two different arrays. Write a program to
compare two strings based on their ASCII value and print the larger one. (HINT:
stop at the first difference in characters).
*/

#include<stdio.h>
int main()
{
    char s1[100],s2[100];

    printf("\nEnter first string: ");
    fgets(s1,100,stdin);
    printf("\nEnter second string: ");
    fgets(s2,100,stdin);

    for(int i=0; i<100;i++)
    {
        if (s1[i]>s2[i])
        {
            printf("\nFirst String is greater");
            break;
        }    
        if (s1[i]<s2[i])
        {
            printf("\nSecond String is greater");
            break;
        }
    }
    return 0;
}