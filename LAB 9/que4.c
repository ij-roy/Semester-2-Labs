/*
Q4. Write a program to store employee details of 3 employees. Each employee has a name, date of birth, 
year of joining, salary. A date itself is composed of date, month and year. 
a.	Create the necessary structures for the same. Store the details of all the employees in an array. 
Take the details from the user
b.	Print the details. For printing, create a separate print function.

*/
#include <stdio.h>

struct DOB {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[50];
    struct DOB dob;
    int yearOfJoining;
    float salary;
};


void print_Employee_data(struct Employee employees[3]) {
    printf("\nEmployee Details:\n");
    for (int i = 0; i < 3; i++) {
        printf("Employee %d\n", i+1);
        printf("Name: %s\n", employees[i].name);
        printf("Date of Birth: %d/%d/%d\n", employees[i].dob.day, employees[i].dob.month, employees[i].dob.year);
        printf("Year of Joining: %d\n", employees[i].yearOfJoining);
        printf("Salary: %.2f\n", employees[i].salary);
        printf("\n");
    }
}

int main() {
    struct Employee employees[3];

    printf("Enter details of 3 employees:\n");

    
    for(int i = 0; i < 3; i++) {
        printf("Employee %d:\n", i+1);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("Date of Birth (DD MM YYYY): ");
        scanf("%d %d %d", &employees[i].dob.day, &employees[i].dob.month, &employees[i].dob.year);
        printf("Year of Joining: ");
        scanf("%d", &employees[i].yearOfJoining);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
    }

    
    print_Employee_data(employees);   

    return 0;
}