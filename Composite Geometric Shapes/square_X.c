#include <stdio.h>

int main (void)
{
    int     lines;
    int     i;
    int     j;
    printf("Please enter the number of lines: ");
    scanf("%d",&lines);
    for(i = 1; i <= lines; i++)
    {
        for(j = 1; j <= lines; j++)
        {
            if(i == 1 || j == 1 || j == lines || i == lines || j == i || j == lines - i + 1)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    return (0);
}