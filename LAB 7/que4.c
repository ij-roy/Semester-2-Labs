/*
Q4. Write a program to extract a substring. Take a string from the user and save
it in an array. Take the position from where the substring is to be extracted and
the length of the substring to be extracted. Display the substring. Handle all the
test cases
*/
#include<stdio.h>

int main() {
char str1[50]; int idx,len;
printf("enter the string\n");
fgets(str1,50,stdin);

printf("Enter the starting index and length of substring\n");

scanf("%d %d",&idx,&len);

for(int i = idx;i<len+idx;i++){
    printf("%c ",str1[i]);
}

    return 0;
}

