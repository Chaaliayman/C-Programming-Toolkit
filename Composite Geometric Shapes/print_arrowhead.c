#include <stdio.h>

int main (void)
{
    int     columns;
    int     j;
    int     i;
    int     P;

    printf("Please enter the number of columns :");
    scanf("%i",&columns);
    P = 1; 
    for (i = 1; i <= (2 * columns - 1); i++)
    {
        for(j = 1; j <= P; j++)
        {
            printf("* ");
        }
          if(i < columns)
            P++;
        else
            P--;
        printf("\n");
    }
    return (0);
}