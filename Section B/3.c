#include<stdio.h>
int main () {
    int h = 10;
    int w = 12;
    int d = 18;
    float kartik = (float)w/d;
    if(h<w && w>d){
        printf("%d\n",w);
    }else if(h>w && h>d){
        printf("%d",h);
    }else{
        printf("%d",d);
    }
    // printf("%f",kartik);
    return 0 ;
}