#include <stdio.h>
int main()
{
    int marks;
    printf("Enter your marks:\n");
    scanf("%d", &marks);

    if (marks < 40)
    {
        printf("You have FAILED your exam!");
    }
    else if (40 <= marks < 59)
    {
        printf("Good work!");
    }
    else if (59 <= marks < 80)
    {
        printf("EXCELLENT work done!!");
    }
    else
    {
        printf("YOU ARE AN OUTSTANDING STUDENT!!");
    }
    return 0;
} 