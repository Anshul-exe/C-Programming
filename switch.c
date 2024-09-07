#include <stdio.h>
int main()
{
    int age, marks;
    printf("Enter your age\n");
    scanf("%d", &age);
    printf("Enter your marks\n");
    scanf("%d", &marks);

    // case 3 contains nested switch, meaning that there is a switch case within another switch case

    switch (age)
    {
    case 3:
        printf("The age is 3\n");
        switch (marks)
        {
        case 45:
            printf("& You got 45 marks");
            break;
        default:
            printf("Your marks are not 45");
            break;
        }
        break;
    case 13:
        printf("Your age is 13");
        break;
    case 23:
        printf("Your age is 23");
        break;
    default:
        printf("Your age is not 3, 13 or 23.");
        break;
    }
}