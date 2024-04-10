/*
4. Write a program in C to find the square of any number using the function.
Test Data :Input any number for square : 20
Expected Output :The square of 20 is : 400.00
*/
#include <stdio.h>
float square(float a){
    return a*a;
}
int main(){
    float a  ;
    printf("Enter a number : ");
    scanf("%f",&a);
    float sq = square(a);
    printf("The Square of %.1f Is %.2f", a ,sq);
    return 0;
}
