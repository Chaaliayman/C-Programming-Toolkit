#include <stdio.h>

int main()
{
    int     i;
    int     n;
    int     Even;

    printf("Enter a number: ");
    scanf("%d",&n);
    Even = 0;

    printf("The first %d even numbers are: ",n);
    for(i = 0; i < n; i++)
    {
        printf("%d ",Even);
        Even = Even + 2;
    }
    printf("\n");
    return (0);
}