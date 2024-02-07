#include <stdio.h>
int main()
{
    int n, m, op, sum;
    printf("select your numbers:\n");
    scanf("%d \n %d", &n, &m);
    printf("select the no. of your operater \n1. +\n2. -\n3. *\n4. /\n");
    scanf("%d", &op);
    if (op == 1)
    {
        printf("your answer is %d", sum = n + m);
    }
    else if (op == 2)
    {
        printf("your answer is %d", sum = n - m);
    }
    else if (op == 3)
    {
        printf("your answer is %d", sum = n * m);
    }
    else if (op == 4)
    {
        printf("your answer is %d", sum = n / m);
    }
    else
    {
        printf("you must choose no. from the given list");
    }

    return 0;
}