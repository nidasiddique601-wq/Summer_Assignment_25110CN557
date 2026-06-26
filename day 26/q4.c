#include <stdio.h>

int main()
{
    int score = 0, ans;

    printf("===== QUIZ APPLICATION =====\n");

    printf("\n1. What is the capital of India?\n");
    printf("1. Mumbai\n2. Delhi\n3. Kolkata\n4. Chennai\n");
    scanf("%d", &ans);
    if(ans == 2)
        score++;

    printf("\n2. Which language is used for system programming?\n");
    printf("1. C\n2. HTML\n3. CSS\n4. SQL\n");
    scanf("%d", &ans);
    if(ans == 1)
        score++;

    printf("\n3. How many bits are there in 1 byte?\n");
    printf("1. 4\n2. 8\n3. 16\n4. 32\n");
    scanf("%d", &ans);
    if(ans == 2)
        score++;

    printf("\n4. Who is known as the Father of C Language?\n");
    printf("1. Dennis Ritchie\n2. James Gosling\n3. Bjarne Stroustrup\n4. Guido van Rossum\n");
    scanf("%d", &ans);
    if(ans == 1)
        score++;

    printf("\n5. Which symbol is used for comments in C?\n");
    printf("1. //\n2. ##\n3. %%\n4. &&\n");
    scanf("%d", &ans);
    if(ans == 1)
        score++;

    printf("\n===== RESULT =====\n");
    printf("Your Score = %d/5\n", score);

    if(score == 5)
        printf("Excellent!\n");
    else if(score >= 3)
        printf("Good Job!\n");
    else
        printf("Need More Practice!\n");

    return 0;
}

