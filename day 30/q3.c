#include <stdio.h>
#include <string.h>

#define MAX 100

struct Employee
{
    int id;
    char name[50];
    char department[30];
    float salary;
};

int main()
{
    struct Employee emp[MAX];
    int count = 0;
    int choice;
    int i, id, found;

    do
    {
        printf("\n=====================================\n");
        printf("    EMPLOYEE MANAGEMENT SYSTEM\n");
        printf("=====================================\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Update Employee\n");
        printf("5. Delete Employee\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                if(count == MAX)
                {
                    printf("Employee record is full!\n");
                    break;
                }

                printf("Enter Employee ID: ");
                scanf("%d", &emp[count].id);
                getchar();

                printf("Enter Employee Name: ");
                fgets(emp[count].name, sizeof(emp[count].name), stdin);
                emp[count].name[strcspn(emp[count].name, "\n")] = '\0';

                printf("Enter Department: ");
                fgets(emp[count].department, sizeof(emp[count].department), stdin);
                emp[count].department[strcspn(emp[count].department, "\n")] = '\0';

                printf("Enter Salary: ");
                scanf("%f", &emp[count].salary);

                count++;

                printf("Employee Added Successfully!\n");
                break;

            case 2:
                if(count == 0)
                {
                    printf("No employee records found!\n");
                }
                else
                {
                    printf("\n========== EMPLOYEE LIST ==========\n");

                    for(i = 0; i < count; i++)
                    {
                        printf("\nEmployee %d\n", i + 1);
                        printf("ID         : %d\n", emp[i].id);
                        printf("Name       : %s\n", emp[i].name);
                        printf("Department : %s\n", emp[i].department);
                        printf("Salary     : %.2f\n", emp[i].salary);
                    }
                }
                break;

            case 3:
                printf("Enter Employee ID to Search: ");
                scanf("%d", &id);

                found = 0;

                for(i = 0; i < count; i++)
                {
                    if(emp[i].id == id)
                    {
                        printf("\nEmployee Found!\n");
                        printf("ID         : %d\n", emp[i].id);
                        printf("Name       : %s\n", emp[i].name);
                        printf("Department : %s\n", emp[i].department);
                        printf("Salary     : %.2f\n", emp[i].salary);

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Employee not found!\n");

                break;

            case 4:
                printf("Enter Employee ID to Update: ");
                scanf("%d", &id);

                found = 0;

                for(i = 0; i < count; i++)
                {
                    if(emp[i].id == id)
                    {
                        getchar();

                        printf("Enter New Name: ");
                        fgets(emp[i].name, sizeof(emp[i].name), stdin);
                        emp[i].name[strcspn(emp[i].name, "\n")] = '\0';

                        printf("Enter New Department: ");
                        fgets(emp[i].department, sizeof(emp[i].department), stdin);
                        emp[i].department[strcspn(emp[i].department, "\n")] = '\0';

                        printf("Enter New Salary: ");
                        scanf("%f", &emp[i].salary);

                        printf("Employee Updated Successfully!\n");

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Employee not found!\n");

                break;

            case 5:
                printf("Enter Employee ID to Delete: ");
                scanf("%d", &id);

                found = 0;

                for(i = 0; i < count; i++)
                {
                    if(emp[i].id == id)
                    {
                        int j;

                        for(j = i; j < count - 1; j++)
                        {
                            emp[j] = emp[j + 1];
                        }

                        count--;

                        printf("Employee Deleted Successfully!\n");

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Employee not found!\n");

                break;

            case 6:
                printf("Exiting Employee Management System...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 6);

    return 0;
}