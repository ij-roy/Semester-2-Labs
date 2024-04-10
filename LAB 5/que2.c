/*
Q2. Assume you are building a ticketing system. For this, create three functions
as follows:
1. Create a function booking. Take the number of seats from the user.
Perform the booking operation here.
OUTPUT:
If all seats are available then print the message “Your tickets are booked”.
If partial seats are available then print the message “Out of your
requested seats only .. number of seats are available”
If no seats are available then print “Sorry, no seats are currently
available”.
2. Create a function cancellation. Take the number of seats from the user.
Perform the cancellation operation here.
3. Create a main function. Take the total number of seats from the user.
Take the choice of booking or cancellation from the user. Call the
necessary methods. Your program should exit when the user presses a
third choice that says s/he wants to exit.
*/
#include <stdio.h>
int booking(int choice ,int booked_seats, int total_seats){
    if (choice>total_seats-booked_seats)
    {
        printf("You Can't book %d seats as there are total %d seats left \n",choice,total_seats-booked_seats);
    }else{
        booked_seats = choice + booked_seats;
        printf("%d seats booked succesfully :)\n",choice);
    }
    return booked_seats;
}
int cancelling(int choice,int booked_seats){
    if (choice>booked_seats)
    {
        printf("You Can't Cancel %d seats as there are %d seats booked\n",choice,booked_seats);
    }else{
        booked_seats = booked_seats - choice;
        printf("%d Seats Cancelled Successfully :)\n",choice);
    }
    return booked_seats;
}
int main(){
    unsigned int total_seats,choice,booked_seats = 0;
    printf("Enter Total Number of Seats : ");
    scanf("%d",&total_seats);
    while (choice)
    {
        printf("How Can IJ help you sir?\n");
        printf("Press-> 1 to book tickets\n");
        printf("Press-> 2 to cancel tickets\n");
        printf("Press-> 3 to exit\n");
        printf("Your Choice : ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            printf("How many Seats You Want to book? : ");
            scanf("%d",&choice);
            booked_seats = booking(choice,booked_seats,total_seats);
            break;
        case 2:
            printf("How many Seats You Want to Cancel : ");
            scanf("%d",&choice);
            booked_seats = cancelling(choice,booked_seats) ;
            break;
        case 3:
            printf("Thanks For Your Time :)");
            choice = 0;
            break;
        default:
            printf("You Had Not Entered a valid choice :( \n");
            break;
        }

    }
    
    return 0;
}
