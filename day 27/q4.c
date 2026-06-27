#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
    int marks[5];
    int total;
    float percentage;
    char grade;
};

int main() {
    struct Student s;
    int i;

    printf("===== Marksheet Generation System =====\n");

    printf("Enter Roll Number: ");
    scanf("%d", &s.rollNo);

    printf("Enter Student Name: ");
    scanf(" %[^\n]", s.name);

    s.total = 0;

    printf("\nEnter Marks of 5 Subjects:\n");

    for(i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &s.marks[i]);

        s.total += s.marks[i];
    }

    s.percentage = s.total / 5.0;

    if(s.percentage >= 90)
        s.grade = 'A';
    else if(s.percentage >= 75)
        s.grade = 'B';
    else if(s.percentage >= 60)
        s.grade = 'C';
    else if(s.percentage >= 40)
        s.grade = 'D';
    else
        s.grade = 'F';

    printf("\n\n===== MARKSHEET =====\n");
    printf("Roll Number : %d\n", s.rollNo);
    printf("Name        : %s\n", s.name);

    for(i = 0; i < 5; i++) {
        printf("Subject %d Marks : %d\n", i + 1, s.marks[i]);
    }

    printf("Total Marks : %d\n", s.total);
    printf("Percentage  : %.2f%%\n", s.percentage);
    printf("Grade       : %c\n", s.grade);

    return 0;
}

