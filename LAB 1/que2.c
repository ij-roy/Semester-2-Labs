/*
Q2. Using width, precision, justification and control string of printf(), print the following modifications of the string “Hello, World”. The string is stored as char c[12] = “Hello, World”.
a.	|Hello, World|
b.	|Hello, Wor|
c.	|Hello, World   | // 3 spaces
d.	|   Hello, World|//3 spaces
e.	|   Hello, Wor| //3 spaces
f.	|Hello, Wor   |//3 spaces
*/
#include <stdio.h>
int main(){
    char c[13] = "Hello, World";
    printf("|%s|\n",c);
    printf("|%-.10s|\n",c);
    printf("|%-15s|\n",c);
    printf("|%15s|\n",c);
    printf("|%13.10s|\n",c);
    printf("|%-13.10s|\n",c);
    return 0;
}