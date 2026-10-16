#include <stdio.h>

int main()
{
    int     i;
    int     n;
    int     sum;
    
    printf("Enter a number: ");
    scanf("%d",&n);
    for (i = 0; i < n; i++)
    {
        sum = sum + i;
    }
    printf("%d",sum);
    return (0);
}