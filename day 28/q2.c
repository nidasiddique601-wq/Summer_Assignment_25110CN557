#include <stdio.h>

struct Account
{
    int accNo;
    char name[50];
    float balance;
};

int main()
{
    struct Account acc;
    int choice;
    float amount;

    printf("Create Account\n");
    printf("Enter Account Number: ");
    scanf("%d", &acc.accNo);

    printf("Enter Name: ");
    scanf("%s", acc.name);

    printf("Enter Initial Balance: ");
    scanf("%f", &acc.balance);

    do
    {
        printf("\n===== BANK ACCOUNT SYSTEM =====\n");
        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Display Account\n");
        printf("4. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter Amount to Deposit: ");
                scanf("%f", &amount);

                acc.balance += amount;

                printf("Deposit Successful!\n");
                break;

            case 2:
                printf("Enter Amount to Withdraw: ");
                scanf("%f", &amount);

                if(amount <= acc.balance)
                {
                    acc.balance -= amount;
                    printf("Withdrawal Successful!\n");
                }
                else
                {
                    printf("Insufficient Balance!\n");
                }
                break;

            case 3:
                printf("\nAccount Number: %d\n", acc.accNo);
                printf("Name: %s\n", acc.name);
                printf("Balance: %.2f\n", acc.balance);
                break;

            case 4:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}
