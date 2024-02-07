// maths science = 45, maths=15, science=15//
#include <stdio.h>
int main()
{
    int n;
    printf("Pick the no. which displays the subjects you are passed in\n1. Maths and Science\n2. Maths\n3. Science\n");
    scanf("%d", &n);
    if (n == 1)
    {
        printf("You get 45 POINTS!!");
    }
    else if (n == 2)
    {
        printf("You get 15 POINTS!");
    }
    else
    {
        printf("You get 15 POINTS!");
    }
    return 0;
}