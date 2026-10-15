#include <stdio.h>

int main (void)
{
    int     lines;
    int     columns;
    int     i;
    int     j;

    printf("Please enter the number of lines: ");
    scanf("%i",&lines);
    printf("Please enter the number of columns:");
    scanf("%i",&columns);
    for (i = 1; i <= lines; i++) 
    {
        for(j = 1; j <= columns; j++)
        {
            if (i == 1 || j == 1 || i == lines || j == columns)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    return (0);
}