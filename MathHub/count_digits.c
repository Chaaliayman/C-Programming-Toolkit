#include <stdio.h>

int main()
{
    int     n;

    printf("Enter a number: ");
    scanf("%d",&n);

    int     i;
    i = 0;
    while (n != 0)
    {
        n = n / 10;
        i++;
    }
    printf("The number of digits is: %d\n", i);
}