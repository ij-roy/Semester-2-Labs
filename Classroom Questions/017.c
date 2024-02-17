/*
WAP to find area of rectangle using functions.
*/
#include <stdio.h>
int rectanglearea(int,int);
int main(){
    int a,b,area;
    printf("Enter sides of rectangle : ");
    scanf("%d%d",&a,&b);
    area = rectanglearea(a,b);
    printf("Area of the given rectangle is %d",area);
    return 0;
}
int rectanglearea(int a,int b){
    return a*b;
}