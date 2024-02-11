/*
Q5: Assume you have a box of n chocolates. Take n from the user. Kids can take chocolates from the box repeatedly till number of 
chocolates are zero or they want to exit the program. The number of chocolates, g, that are to be each time, is also to be taken from 
the user. If a kid takes one chocolate a message should be displayed “Chocolates left on box: 1”. The message must show the exact number 
of chocolates taken from the box each time. Write a function called gift. Here, (a) the input g, (b) the update in the count in the box 
should take place, and (c) display the message.

Sample: Box has 10 chocolates 

➢ Take a chocolate? Yes
How many? 2 
Output: “Chocolates left on box: 8”.

➢ Take a chocolate? Yes
How many? 12 
Output: “Not enough chocolates”
*/
#include<stdio.h>

int main(){
    int total,taken,choice;
    printf("Enter Total Number Of Choclates : ");
    scanf("%d",&total);
    while (total)
    {
        printf("Want To Take Choclate ? \n");
        printf("press 1 for yes 0 for no : ");
        scanf("%d",&choice);
        if (choice)
        {
            printf("How Many Choclates You Want To Take?\n");
            scanf("%d",&taken);
            total -=taken;
            if (total+1)
            {
                printf("You Have Taken %d Choclates \n",taken);
                printf("%d choclates left\n",total);
            }else{
                printf("Not Enough Choclates");
                break;
            }
            
        }else{
            break;
        }
        
    }
    
    return 0;
}
