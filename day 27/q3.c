#include <stdio.h>

struct Employee {
    int empId;
    char name[50];
    float basicSalary;
    float hra;
    float da;
    float grossSalary;
};

struct Employee emp[100];
int count = 0;

void addEmployee() {
    printf("\nEnter Employee ID: ");
    scanf("%d", &emp[count].empId);

    printf("Enter Employee Name: ");
    scanf(" %[^\n]", emp[count].name);

    printf("Enter Basic Salary: ");
    scanf("%f", &emp[count].basicSalary);

    // Salary Calculation
    emp[count].hra = 0.20 * emp[count].basicSalary; // 20% HRA
    emp[count].da = 0.10 * emp[count].basicSalary;  // 10% DA

    emp[count].grossSalary =
        emp[count].basicSalary +
        emp[count].hra +
        emp[count].da;

    count++;

    printf("Salary calculated successfully!\n");
}

void displaySalary() {
    int i;

    if (count == 0) {
        printf("\nNo employee records found.\n");
        return;
    }

    printf("\n----- Salary Details -----\n");

    for (i = 0; i < count; i++) {
        printf("\nEmployee ID   : %d", emp[i].empId);
        printf("\nName          : %s", emp[i].name);
        printf("\nBasic Salary  : %.2f", emp[i].basicSalary);
        printf("\nHRA (20%%)     : %.2f", emp[i].hra);
        printf("\nDA (10%%)      : %.2f", emp[i].da);
        printf("\nGross Salary  : %.2f", emp[i].grossSalary);
        printf("\n----------------------------\n");
    }
}

int main() {
    int choice;

    do {
        printf("\n===== Salary Management System =====\n");
        printf("1. Add Employee Salary\n");
        printf("2. Display Salary Details\n");
        printf("3. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addEmployee();
                break;

            case 2:
                displaySalary();
                break;

            case 3:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while (choice != 3);

    return 0;
}


