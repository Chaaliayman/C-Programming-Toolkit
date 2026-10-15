#include <stdio.h>

int main (void)
{
    int     lines;
    int     i;
    int     j;

    printf("Please enter the number of lines :");
    scanf("%i",&lines);
    for (i = 1; i <= lines; i++)   //  1 < 4 ; 
    {
        for (j = 1; j <= lines - i; j++)    //  j <= 3 ;   
        {
            printf("  "); 
        }
        for(j = 1; j <= lines; j++)// 
        {
            printf("* ");
        }
        printf("\n");
    }
    return (0);
}