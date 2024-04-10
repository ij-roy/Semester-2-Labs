/*
Q1. Write a program called ‘setSail.c’ which has to print the location of a ship
using variables, latitude and longitude. Latitude is how far north or south the
ship is, and longitude is her position east or west. Input will be in the form of
positive and negative integers. Note: Minus sign denotes Southern hemisphere
or West of meridian, Positive denotes Northern hemisphere or East of meridian.
This program has five functions:
 A function sail_southEast. Change both latitude and longitude by 1. Note:
No other line of code must be there like print
Old position: 11 and 22; new position 10 and 23.
Old position: -11,-22; new position -12 and -21.
 A function sail_southWest. Change both latitude and longitude by 1. Note:
No other line of code must be there like print
Old position: 11 and 22; new position 10 and 21.
Old position: -11,-22; new position -12 and -23.
 A function sail_northEast. Change both latitude and longitude by 1. Note:
No other line of code must be there like print
Old position: 11 and 22; new position 12 and 23.
Old position: -11,-22; new position -10 and -21
 A function sail_northWest. Change both latitude and longitude by 1. Note:
No other line of code must be there like print
Old position: 11 and 22; new position ?.
Old position: -11,-22; new position ?
 A main function that takes a given latitude and longitude of the ship from
the user. Make the ship move 2 times south east, once north east, once
north west and finally once south west. Each time print the latitude and
longitude.
Test Case: Input Latitude, longitude: 11,22
TC2: -11,22
TC3: 11,-22
TC3: -11,-22
*/
#include <stdio.h>
void sail_southEast(int *x,int *y){
    *x = *x - 1;
    *y = *y + 1;
}
void sail_southWest(int *x,int *y){
    *x = *x - 1;
    *y = *y - 1;
}
void sail_northEast(int *x,int *y){
    *x = *x + 1;
    *y = *y + 1;
}
void sail_northWest(int *x,int *y){
    *x = *x + 1;
    *y = *y - 1;
}
int main(){
    int x , y;
    printf("Enter Latitudes : ");
    scanf("%d%d",&x,&y);
    sail_southEast(&x,&y);
    sail_southEast(&x,&y);
    sail_northEast(&x,&y);
    sail_northWest(&x,&y);
    sail_southWest(&x,&y);
    printf("Final Coordinates : ");
    printf("%d %d", x, y);
    return 0;
}
