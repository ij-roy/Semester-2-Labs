/*
2. Write a program to take input of name, rollno and marks obtained by a student in 4
subjects of 100 marks each and display the name, rollno with percentage score secured.
*/
#include<stdio.h>
int main(){
    char name[23];
    int rollno, s1, s2, s3, s4; 
    float prect;
    printf("Enter name, roll no, s1, s2 ,s3,s4\n");
    scanf("%s%d%d%d%d%d",&name,&rollno,&s1,&s2,&s3,&s4);
    prect = (float)(s1+s2+s3+s4)/4;
    printf("%s\n%d\n%-.2f",name,rollno,prect); 
    return 0;
}