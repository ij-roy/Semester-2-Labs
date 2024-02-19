/*
1. Write a program to compute grade of students using if else adder. The grades are
assigned as followed:
Marks Grade
    marks < 50 F
    50 ≤ marks < 60 C
    60 ≤ marks < 70 B
    70 ≤ marks < 80 B+
    80 ≤ marks < 90 A
    90 ≤ marks ≤ 100 A+ 
*/
#include <stdio.h>
int main(){
    int marks;
    char grade[3];
    printf("Enter your marks : ");
    scanf("%d",&marks);
    if (marks>100)
    {
        grade[0] = 'O';
        grade[1] = '\0';
    }else if (marks >= 90)
    {
        grade[0] = 'A';
        grade[1] = '+';
        grade[2] = '\0';
    }else if (marks >= 80)
    {
        grade[0] = 'A';
        grade[1] = '\0';
    }else if (marks >= 70)
    {
        grade[0] = 'B';
        grade[1] = '+';
        grade[2] = '\0';
    }else if (marks >= 60)
    {
        grade[0] = 'B';
        grade[1] = '\0';
    }else if (marks >= 50)
    {
        grade[0] = 'C';
        grade[1] = '\0';
    }else{
        grade[0] = 'F';
        grade[1] = '\0';
    }
    printf("Your Grade is : %s",grade);   
    return 0;
}
