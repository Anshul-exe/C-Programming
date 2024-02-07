#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age \n");
    scanf("%d", &age);
    printf("You have entered %d as your age \n", age);
    if (age >= 18)
    {
        printf("Yes, You can vote!");
    }
    else if (age > 10)
    {
        printf("You can only vote for kids...");
    }
    else if (age > 3)
    {
        printf("You can only vote for babies...");
    }
    else
    {
        printf("No, You can't vote");
    }
    return 0;
}