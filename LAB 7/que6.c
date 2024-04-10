/*
Q6. Write a program to append the contents of string str2 to string str1. Display
both the final strings.
Str1: World
Str2: Hi
Output Str1:WorldHi
*/
#include <stdio.h>

void appendStrings(char *str1, const char *str2) {
    while (*str1) {
        str1++;
    }
    while (*str2) {
        *str1 = *str2;
        str1++;
        str2++;
    }
    *str1 = '\0';
}

int main() {
    char str1[50] = "World";
    const char str2[] = "Hi";

    appendStrings(str1, str2);

    printf("Str1: %s\n", str1);

    return 0;
}