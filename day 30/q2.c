#include <stdio.h>
#include <string.h>

#define MAX 100

struct Book
{
    int id;
    char title[50];
    char author[50];
    int issued;   // 0 = Available, 1 = Issued
};

int main()
{
    struct Book books[MAX];
    int count = 0;
    int choice;
    int i, id, found;

    do
    {
        printf("\n=================================\n");
        printf("      MINI LIBRARY SYSTEM\n");
        printf("=================================\n");
        printf("1. Add Book\n");
        printf("2. Display All Books\n");
        printf("3. Search Book\n");
        printf("4. Issue Book\n");
        printf("5. Return Book\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                if(count == MAX)
                {
                    printf("Library is full!\n");
                    break;
                }

                printf("Enter Book ID: ");
                scanf("%d", &books[count].id);
                getchar();

                printf("Enter Book Title: ");
                fgets(books[count].title, sizeof(books[count].title), stdin);
                books[count].title[strcspn(books[count].title, "\n")] = '\0';

                printf("Enter Author Name: ");
                fgets(books[count].author, sizeof(books[count].author), stdin);
                books[count].author[strcspn(books[count].author, "\n")] = '\0';

                books[count].issued = 0;

                count++;

                printf("Book Added Successfully!\n");
                break;

            case 2:
                if(count == 0)
                {
                    printf("No books available.\n");
                }
                else
                {
                    printf("\n========== BOOK LIST ==========\n");

                    for(i = 0; i < count; i++)
                    {
                        printf("\nBook %d\n", i + 1);
                        printf("Book ID : %d\n", books[i].id);
                        printf("Title   : %s\n", books[i].title);
                        printf("Author  : %s\n", books[i].author);

                        if(books[i].issued == 0)
                            printf("Status  : Available\n");
                        else
                            printf("Status  : Issued\n");
                    }
                }
                break;

            case 3:
                printf("Enter Book ID to Search: ");
                scanf("%d", &id);

                found = 0;

                for(i = 0; i < count; i++)
                {
                    if(books[i].id == id)
                    {
                        printf("\nBook Found!\n");
                        printf("Book ID : %d\n", books[i].id);
                        printf("Title   : %s\n", books[i].title);
                        printf("Author  : %s\n", books[i].author);

                        if(books[i].issued == 0)
                            printf("Status  : Available\n");
                        else
                            printf("Status  : Issued\n");

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Book not found!\n");

                break;

            case 4:
                printf("Enter Book ID to Issue: ");
                scanf("%d", &id);

                found = 0;

                for(i = 0; i < count; i++)
                {
                    if(books[i].id == id)
                    {
                        if(books[i].issued == 0)
                        {
                            books[i].issued = 1;
                            printf("Book Issued Successfully!\n");
                        }
                        else
                        {
                            printf("Book is already issued.\n");
                        }

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Book not found!\n");

                break;

            case 5:
                printf("Enter Book ID to Return: ");
                scanf("%d", &id);

                found = 0;

                for(i = 0; i < count; i++)
                {
                    if(books[i].id == id)
                    {
                        if(books[i].issued == 1)
                        {
                            books[i].issued = 0;
                            printf("Book Returned Successfully!\n");
                        }
                        else
                        {
                            printf("Book is already available.\n");
                        }

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Book not found!\n");

                break;

            case 6:
                printf("Thank you for using Mini Library System!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 6);

    return 0;
}