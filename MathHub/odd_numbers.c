#include <stdio.h>

int main ()
{
    int     i;
    int     n;
    int     odd;

    printf("Enter a number:");
    scanf("%d",&n);
    odd = 1;

    printf("\nThe first %d odd numbers are : ", n);
    for (i = 0; i < n; i++)
    {
        printf("%d  ",odd);
        odd = odd + 2;
    }
    printf("\n");
    return (0);

}