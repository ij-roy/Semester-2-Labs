/*
Q4. Write a program to store employee details of 3 employees. Each employee has a name, date of birth, 
year of joining, salary. A date itself is composed of date, month and year. 
a.	Create the necessary structures for the same. Store the details of all the employees in an array. 
Take the details from the user
b.	Print the details. For printing, create a separate print function.

*/
struct dob
{
    int date;
    char month[20];
    int year;
};

struct employee
{
    char name[20];
    struct dob;
    int yearOfJoining;
    int salary;
};
int main(){
    struct employee1{ };
}