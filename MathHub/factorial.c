#include <stdio.h>

int main ()
{
    int     i;
    int     n;
    int     facto;

    printf("Enter a number: ");
    scanf("%d",&n);
    for (i = 1; i < n; i++)
    {
        facto = n * i;
        printf("%d * %d = %d",n,i,facto);
        printf("\n");
    }
    return (0);
}