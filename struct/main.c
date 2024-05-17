#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {
    struct date {
        int day;
        int month;
        int year;
    };

    struct date today;

    today.day = 17;
    today.month = 5;
    today.year = 2024;

    printf("Day = %d | Month = %d | Year = %d \n", today.day, today.month, today.year);

    // --------------- Challenge ---------------
    struct employee {
        char name[100];  // Array to hold the name
        int hireDate;
        float salary;
    };
    char enteredName[50];
    int enteredHireDate;
    float enteredSalary;

    printf("Enter an employee name: ");
    scanf("%s", &enteredName);

    printf("Enter the hireDate: ");
    scanf("%d", &enteredHireDate);

    printf("Enter an employee salary: ");
    scanf("%f", &enteredSalary);

    struct employee employee1;
    strcpy(employee1.name, enteredName);
    employee1.hireDate = enteredHireDate;
    employee1.salary = enteredSalary;

    printf("Employee name %s | Employee hire date = %d | Employee salary = %f", employee1.name, employee1.hireDate,
           employee1.salary);

    return 0;
}
