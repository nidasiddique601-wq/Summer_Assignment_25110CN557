#include <stdio.h>
#include <string.h>

char playerName[50];
int score = 0;
int item;

void room1();
void room2();
void room3();
void room4();
void room5();
void finalRoom();

int main()
{
    int choice;

    printf("=================================\n");
    printf("     THE LOST TEMPLE GAME\n");
    printf("=================================\n");

    printf("Enter your name: ");
    fgets(playerName, sizeof(playerName), stdin);

    printf("\nWelcome, %s", playerName);

    printf("\n1. Enter the Temple");
    printf("\n2. Exit");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    if(choice == 1)
    {
        room1();
    }
    else
    {
        printf("\nGoodbye!\n");
    }

    return 0;
}

void room1()
{
    int choice;

    printf("\n\n--- ROOM 1 ---\n");
    printf("You see two doors.\n");
    printf("1. Red Door\n");
    printf("2. Blue Door\n");

    printf("Enter choice: ");
    scanf("%d", &choice);

    if(choice == 1)
    {
        score += 10;
        printf("\nCorrect Door!\n");
        room2();
    }
    else
    {
        printf("\nWrong Door!");
        printf("\nGAME OVER\n");
    }
}

void room2()
{
    int answer;

    printf("\n\n--- ROOM 2 ---\n");
    printf("Solve the riddle:\n");
    printf("i am not a lock but i have keys?\n");

    printf("1. keyboard\n");
    printf("2. Car\n");
    printf("3. Door\n");

    printf("Enter answer: ");
    scanf("%d", &answer);

    if(answer == 1)
    {
        score += 20;
        printf("\nCorrect Answer!\n");
        room3();
    }
    else
    {
        printf("\nWrong Answer!");
        printf("\nGAME OVER\n");
    }
}

void room3()
{
    printf("\n\n--- ROOM 3 ---\n");
    printf("You found a treasure chest.\n");

    printf("Choose one item:\n");
    printf("1. Sword\n");
    printf("2. Magic Potion\n");
    printf("3. Gold\n");

    printf("Enter choice: ");
    scanf("%d", &item);

    printf("\nItem Collected!\n");

    score += 10;

    room4();
}

void room4()
{
    printf("\n\n--- ROOM 4 ---\n");
    printf("A giant monster appears!\n");

    if(item == 1)
    {
        printf("\nYou use the Sword and defeat the monster!\n");
        score += 30;
        room5();
    }
    else if(item == 2)
    {
        printf("\nYou drink the Magic Potion and become invisible!\n");
        score += 30;
        room5();
    }
    else
    {
        printf("\nThe monster takes your gold and defeats you!\n");
        printf("\nGAME OVER\n");
    }
}
void room5()
{
   printf("\nthere comes another riddle in front of you\n");
   printf("\nq- what has mouth but cannot speak,a bed but cannot sleep,and runs but never walks?\n");
   printf("\n1- watch\n");
   printf("\n2-river\n");
   printf("\n3-door\n");
   int answer;
   printf("\nenter your choice\n");
   scanf("%d",&answer);
   if(answer==1)
   {
    printf("\nwrong choice\n");
    printf("\ngame over\n");

   }
   if(answer==2)
   {
    printf("\nright choice!!!\n");
    finalRoom();

   }
    if(answer==3)
   {
    printf("\nwrong choice!!!\n");
     printf("\ngame over\n");


   }
 
}

void finalRoom()
{
    char code[20];
    int attempts = 3;

    printf("\n\n--- FINAL ROOM ---\n");
    printf("A magical gate blocks your path.\n");
    printf("You have 3 attempts to enter the secret code.\n");

    while(attempts > 0)
    {
        printf("\nEnter code: ");
        scanf("%s", code);

        if(strcmp(code, "TEMPLE") == 0)
        {
            score += 50;

            printf("\n=================================\n");
            printf("CONGRATULATIONS!\n");
            printf("You escaped the Lost Temple!\n");
            printf("Final Score = %d\n", score);
            printf("=================================\n");

            return;
        }

        attempts--;

        printf("Wrong Code!\n");
        printf("Attempts Left: %d\n", attempts);
    }

    printf("\nYou are trapped forever!\n");
    printf("GAME OVER\n");
}