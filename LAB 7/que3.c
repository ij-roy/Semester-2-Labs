/*
Q3. Write a program to find a substring. Take a string from the user and save it
in an array. Take the substring (to be found) from the user. If the substring is
present, display the starting position. If the substring is not found display
“Substring not found”.
*/
#include<stdio.h>
int main(){
    char arr[100];
    char sub_arr[100];
    printf("Enter the main string = ");
    fgets(arr,sizeof(arr),stdin);
    fflush;
    printf("Enter the substring = ");
    fgets(sub_arr,sizeof(sub_arr),stdin);

    for(int i=0;i< sizeof(arr);i++){
        for(int j =0;j< sizeof(sub_arr);j++){
            if(arr[i]!=sub_arr[j]) break;
            else{
                for(int k=j+1;k< sizeof(sub_arr);k++){
                    if(arr[i+1]==sub_arr[k]){
                        printf("YES");
                        break;
                    }
                    else{
                        break;
                    }
                }
                break;
            }
        }
    }
    return 0;
}