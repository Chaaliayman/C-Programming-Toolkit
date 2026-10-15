#include <stdio.h>

int main ()
{
    int     length;
	int     width;
	int     i;
	int     j;

    printf("Please enter the number of rows :");
    scanf("%i",&length);
    printf("Please enter the number of columns :");
    scanf("%i",&width);
    for (i = 1; i <= length; i++)
    {
        for (j = 1; j <= width; j ++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return (0);
}