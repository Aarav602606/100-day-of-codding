#include <stdio.h>
#include <string.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    int id;
    char name[50];
    float salary;
    struct Date join_date;
};

int main() {
    struct Employee emp1;

    emp1.id = 101;
    strcpy(emp1.name, "Grace Hopper");
    emp1.salary = 75000.50;
    emp1.join_date.day = 9;
    emp1.join_date.month = 12;
    emp1.join_date.year = 2022;

    printf("--- Employee Details ---\n");
    printf("ID: %d\n", emp1.id);
    printf("Name: %s\n", emp1.name);
    printf("Salary: %.2f\n", emp1.salary);
    printf("Joining Date: %d/%d/%d\n", emp1.join_date.day, emp1.join_date.month, emp1.join_date.year);

    return 0;
}

