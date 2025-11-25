#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

void add_record() {
    struct Employee emp;
    FILE *file_ptr;

    printf("\n--- Add New Employee Record ---\n");
    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);
    printf("Enter Employee Name: ");
    scanf(" %49[^\n]", emp.name);
    printf("Enter Employee Salary: ");
    scanf("%f", &emp.salary);

    file_ptr = fopen("employee_data.dat", "ab");
    if (file_ptr == NULL) {
        printf("Error: Could not open file for writing.\n");
        return;
    }

    fwrite(&emp, sizeof(struct Employee), 1, file_ptr);

    fclose(file_ptr);
    printf("\nRecord added successfully.\n");
}

void view_records() {
    struct Employee read_emp;
    FILE *file_ptr;
    int count = 0;

    file_ptr = fopen("employee_data.dat", "rb");
    if (file_ptr == NULL) {
        printf("\nNo employee records found (file not created yet).\n");
        return;
    }

    printf("\n--- All Employee Records ---\n");
    
    while (fread(&read_emp, sizeof(struct Employee), 1, file_ptr) == 1) {
        printf("ID: %d, Name: %s, Salary: %.2f\n", read_emp.id, read_emp.name, read_emp.salary);
        count++;
    }

    fclose(file_ptr);
    
    if (count == 0) {
        printf("The file is empty.\n");
    }
}

void display_menu() {
    printf("\n\n--- Employee Data Management System ---\n");
    printf("1. Add New Employee Record\n");
    printf("2. View All Records\n");
    printf("3. Exit\n");
    printf("Enter your choice: ");
}

int main() {
    int choice;

    do {
        display_menu();
        if (scanf("%d", &choice) != 1) {
            
            while (getchar() != '\n'); 
            choice = 0; 
            printf("Invalid input. Please enter a number.\n");
            continue;
        }

        switch (choice) {
            case 1:
                add_record();
                break;
            case 2:
                view_records();
                break;
            case 3:
                printf("\nExiting the program. Goodbye!\n");
                break;
            default:
                printf("\nInvalid choice. Please select 1, 2, or 3.\n");
        }
    } while (choice != 3);

    return 0;
}


