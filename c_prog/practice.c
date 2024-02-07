#include <stdio.h>

int main()
{
    int marks;

    char subject[8];

    printf("choose your subject: ");
    scanf("%s", &subject);
    printf("How much marks did you score: ");
    scanf("%d", &marks);
    printf("Your marks in %s are %d\n", subject, marks);

    if (marks < 33)
    {
        printf("You failed your exam!!");
    }
    else if (marks == 33)
    {
        printf("You barely made it");
    }
    else if (33 < marks && marks <= 100)
    {
        printf("You have passed\n");
        if (marks <= 50)
        {
            printf("that's nice.");
        }
        else if (50 < marks && marks < 70)
        {
            printf("your score is above 50, well done");
        }

        else if (70 <= marks && marks <= 90)
        {
            printf("You are one of our best ones");
        }
        else

        {
            printf("Ahaaa!! Here comes our outstanding student");
        }
    }
    else
    {
        printf("Which isn't possible, enter your marks correctly");
    }

    return 0;
}