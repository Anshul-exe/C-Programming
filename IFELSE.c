#include <stdio.h>
int main ()
{
    int n;
    printf("Enter an integer");
    scanf ("%d", &n);
    if (n%2==0)
    {
        printf ("Given no. is Even");
    }
    else
    {
        printf ("Given no. is Odd");
    };
}