/*
5. Write a program to check whether a number is positive, negative or zero using
switch case(Nested Switch case).
*/
#include <stdio.h>

int main() {
    int n;
    printf("Enter an Integer : ");
    scanf("%d", &n);

    switch (n < 0) {
        case 1:
            printf("%d is negative", n);
            break;
        case 0:
            switch (n > 0) {
                case 1:
                    printf("%d is positive", n);
                    break;
                case 0:
                    printf("%d is Zero", n);
                    break;
                default:
                    break;
            }
            break;
        default:
            break;
    }

    return 0;
}
                                          