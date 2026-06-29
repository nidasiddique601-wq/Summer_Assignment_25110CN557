#include <stdio.h>

struct Ticket
{
    int seatNo;
    int booked;
};

int main()
{
    struct Ticket seats[10];
    int i, choice, seat;

    for(i = 0; i < 10; i++)
    {
        seats[i].seatNo = i + 1;
        seats[i].booked = 0;
    }

    do
    {
        printf("\n===== TICKET BOOKING SYSTEM =====\n");
        printf("1. View Available Seats\n");
        printf("2. Book Ticket\n");
        printf("3. Display Booked Tickets\n");
        printf("4. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\nAvailable Seats:\n");
                for(i = 0; i < 10; i++)
                {
                    if(seats[i].booked == 0)
                        printf("Seat %d\n", seats[i].seatNo);
                }
                break;

            case 2:
                printf("Enter Seat Number (1-10): ");
                scanf("%d", &seat);

                if(seat < 1 || seat > 10)
                {
                    printf("Invalid Seat Number!\n");
                }
                else if(seats[seat - 1].booked == 1)
                {
                    printf("Seat Already Booked!\n");
                }
                else
                {
                    seats[seat - 1].booked = 1;
                    printf("Ticket Booked Successfully!\n");
                }
                break;

            case 3:
                printf("\nBooked Seats:\n");
                for(i = 0; i < 10; i++)
                {
                    if(seats[i].booked == 1)
                        printf("Seat %d\n", seats[i].seatNo);
                }
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

