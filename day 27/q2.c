#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

struct Employee emp[100];
int count = 0;

void addEmployee() {
    printf("\nEnter Employee ID: ");
    scanf("%d", &emp[count].id);

    printf("Enter Employee Name: ");
    scanf(" %[^\n]", emp[count].name);

    printf("Enter Salary: ");
    scanf("%f", &emp[count].salary);

    count++;

    printf("Employee added successfully!\n");
}

void displayEmployees() {
    int i;

    if (count == 0) {
        printf("\nNo employee records found.\n");
        return;
    }

    printf("\n----- Employee Records -----\n");

    for (i = 0; i < count; i++) {
        printf("Employee ID : %d\n", emp[i].id);
        printf("Name        : %s\n", emp[i].name);
        printf("Salary      : %.2f\n", emp[i].salary);
        printf("----------------------------\n");
    }
}

void searchEmployee() {
    int id, i, found = 0;

    printf("\nEnter Employee ID to Search: ");
    scanf("%d", &id);

    for (i = 0; i < count; i++) {
        if (emp[i].id == id) {
            printf("\nEmployee Found!\n");
            printf("Employee ID : %d\n", emp[i].id);
            printf("Name        : %s\n", emp[i].name);
            printf("Salary      : %.2f\n", emp[i].salary);

            found = 1;
            break;
        }
    }

    if (found == 0) {
        printf("Employee not found.\n");
    }
}

int main() {
    int choice;

    do {
        printf("\n===== Employee Management System =====\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addEmployee();
                break;

            case 2:
                displayEmployees();
                break;

            case 3:
                searchEmployee();
                break;

            case 4:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while (choice != 4);

    return 0;
}

