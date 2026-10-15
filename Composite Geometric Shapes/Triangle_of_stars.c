#include <stdio.h>

int main ()
{
    int     lines;
    int     i;
    int     j;

    printf("Please enter the number of lines :");
    scanf("%i",&lines);
    for (i = 1; i <= lines; i++) 
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return (0);
}