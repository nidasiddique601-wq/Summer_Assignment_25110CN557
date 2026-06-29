#include <stdio.h>

struct Product
{
    int id;
    char name[50];
    int quantity;
};

int main()
{
    struct Product p[100];
    int n = 0, choice, i, searchId, found, newQty;

    do
    {
        printf("\n===== INVENTORY MANAGEMENT SYSTEM =====\n");
        printf("1. Add Product\n");
        printf("2. Display Products\n");
        printf("3. Search Product\n");
        printf("4. Update Quantity\n");
        printf("5. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter Product ID: ");
                scanf("%d", &p[n].id);

                printf("Enter Product Name: ");
                scanf("%s", p[n].name);

                printf("Enter Quantity: ");
                scanf("%d", &p[n].quantity);

                n++;
                printf("Product Added Successfully!\n");
                break;

            case 2:
                if(n == 0)
                {
                    printf("No Products Available!\n");
                }
                else
                {
                    printf("\n--- Product List ---\n");
                    for(i = 0; i < n; i++)
                    {
                        printf("ID: %d\n", p[i].id);
                        printf("Name: %s\n", p[i].name);
                        printf("Quantity: %d\n\n", p[i].quantity);
                    }
                }
                break;

            case 3:
                printf("Enter Product ID to Search: ");
                scanf("%d", &searchId);

                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(p[i].id == searchId)
                    {
                        printf("Product Found!\n");
                        printf("ID: %d\n", p[i].id);
                        printf("Name: %s\n", p[i].name);
                        printf("Quantity: %d\n", p[i].quantity);
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Product Not Found!\n");

                break;

            case 4:
                printf("Enter Product ID: ");
                scanf("%d", &searchId);

                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(p[i].id == searchId)
                    {
                        printf("Enter New Quantity: ");
                        scanf("%d", &newQty);

                        p[i].quantity = newQty;

                        printf("Quantity Updated!\n");
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Product Not Found!\n");

                break;

            case 5:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 5);

    return 0;
}

