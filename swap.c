#include <stdio.h>
int fact (int n){
    
if  (n==0)
return 1;
else
return (n*fact(n-1));
}
int main ()
{
    int f,num;
    printf("Enter the number");
    scanf("%d", &num);
    f=fact(num);
    printf("Factorial:\n");
    printf("%d",f);

}