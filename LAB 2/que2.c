/*
2.	A date is in the format dd-mm-yyyy. Write a scanf statement for the user to input date in this format.
Print the date, month and year separately with a padding of 10 spaces.
*/
#include<stdio.h>
int main(){
    int dd,mm,yy;
    scanf("%d-%d-%d",&dd,&mm,&yy);
    printf("%d\t\t%d\t\t%d",dd,mm,yy);
    return 0;
}