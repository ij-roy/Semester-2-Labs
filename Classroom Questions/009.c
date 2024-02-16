/*
WAP for a valid triangle given three sides find the area ?
*/
#include <stdio.h>
#include <math.h>
int main(){
    int a,b,c;
    float s , area;
    printf("Enter The Sides Of the Triangle : ");
    scanf("%d%d%d",&a,&b,&c);
    if ((a+b)>c && (b+c)>a && (a+c)>b)
    {
        s = (float)(a+b+c)/2;
        area = sqrt(s*(s-a)*(s-b)*(s-c));
        printf("The area of the triangle is %-2f",area);
    }else
        printf("Not a valid triangle");
    return 0;
}