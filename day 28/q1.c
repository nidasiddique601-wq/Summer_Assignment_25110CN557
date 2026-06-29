#include <stdio.h>
#include <string.h>

struct Book
{
    int id;
    char title[50];
    char author[50];
};

int main()
{
    struct Book books[100];
    int n = 0, choice, i, searchId, found;

    do
    {
        printf("\n1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);
        getchar();

        switch(choice)
        {
            case 1:
                printf("Enter Book ID: ");
                scanf("%d", &books[n].id);
                getchar();

                printf("Enter Book Title: ");
                fgets(books[n].title, 50, stdin);

                for(i = 0; books[n].title[i] != '\0'; i++)
                {
                    if(books[n].title[i] == '\n')
                    {
                        books[n].title[i] = '\0';
                        break;
                    }
                }

                printf("Enter Author Name: ");
                fgets(books[n].author, 50, stdin);

                for(i = 0; books[n].author[i] != '\0'; i++)
                {
                    if(books[n].author[i] == '\n')
                    {
                        books[n].author[i] = '\0';
                        break;
                    }
                }

                n++;
                printf("Book Added Successfully!\n");
                break;

            case 2:
                for(i = 0; i < n; i++)
                {
                    printf("\nID: %d", books[i].id);
                    printf("\nTitle: %s", books[i].title);
                    printf("\nAuthor: %s\n", books[i].author);
                }
                break;

            case 3:
                printf("Enter Book ID to Search: ");
                scanf("%d", &searchId);

                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(books[i].id == searchId)
                    {
                        printf("\nBook Found\n");
                        printf("ID: %d\n", books[i].id);
                        printf("Title: %s\n", books[i].title);
                        printf("Author: %s\n", books[i].author);
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Book Not Found\n");

                break;

            case 4:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid Choice\n");
        }

    } while(choice != 4);

    return 0;
}


