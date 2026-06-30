#include <stdio.h>
#include <string.h>

#define MAX 100

struct Student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    struct Student s[MAX];
    int count = 0;
    int choice;
    int i, roll, found;

    do
    {
        printf("\n=====================================\n");
        printf("      STUDENT RECORD SYSTEM\n");
        printf("=====================================\n");
        printf("1. Add Student\n");
        printf("2. Display All Students\n");
        printf("3. Search Student\n");
        printf("4. Update Student\n");
        printf("5. Delete Student\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                if(count == MAX)
                {
                    printf("Student record is full!\n");
                    break;
                }

                printf("\nEnter Roll Number: ");
                scanf("%d", &s[count].roll);

                getchar();

                printf("Enter Name: ");
                fgets(s[count].name, sizeof(s[count].name), stdin);
                s[count].name[strcspn(s[count].name, "\n")] = '\0';

                printf("Enter Marks: ");
                scanf("%f", &s[count].marks);

                count++;
                printf("Student added successfully!\n");
                break;

            case 2:
                if(count == 0)
                {
                    printf("No records found!\n");
                }
                else
                {
                    printf("\n------ Student Records ------\n");

                    for(i = 0; i < count; i++)
                    {
                        printf("\nStudent %d\n", i + 1);
                        printf("Roll Number : %d\n", s[i].roll);
                        printf("Name        : %s\n", s[i].name);
                        printf("Marks       : %.2f\n", s[i].marks);
                    }
                }
                break;

            case 3:
                if(count == 0)
                {
                    printf("No records available!\n");
                    break;
                }

                printf("Enter Roll Number to Search: ");
                scanf("%d", &roll);

                found = 0;

                for(i = 0; i < count; i++)
                {
                    if(s[i].roll == roll)
                    {
                        printf("\nStudent Found!\n");
                        printf("Roll Number : %d\n", s[i].roll);
                        printf("Name        : %s\n", s[i].name);
                        printf("Marks       : %.2f\n", s[i].marks);

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Student not found!\n");

                break;

            case 4:
                if(count == 0)
                {
                    printf("No records available!\n");
                    break;
                }

                printf("Enter Roll Number to Update: ");
                scanf("%d", &roll);

                found = 0;

                for(i = 0; i < count; i++)
                {
                    if(s[i].roll == roll)
                    {
                        getchar();

                        printf("Enter New Name: ");
                        fgets(s[i].name, sizeof(s[i].name), stdin);
                        s[i].name[strcspn(s[i].name, "\n")] = '\0';

                        printf("Enter New Marks: ");
                        scanf("%f", &s[i].marks);

                        printf("Record Updated Successfully!\n");
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Student not found!\n");

                break;

            case 5:
                if(count == 0)
                {
                    printf("No records available!\n");
                    break;
                }

                printf("Enter Roll Number to Delete: ");
                scanf("%d", &roll);

                found = 0;

                for(i = 0; i < count; i++)
                {
                    if(s[i].roll == roll)
                    {
                        int j;

                        for(j = i; j < count - 1; j++)
                        {
                            s[j] = s[j + 1];
                        }

                        count--;

                        printf("Record Deleted Successfully!\n");
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Student not found!\n");

                break;

            case 6:
                printf("Thank you for using Student Record System!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 6);

    return 0;
}