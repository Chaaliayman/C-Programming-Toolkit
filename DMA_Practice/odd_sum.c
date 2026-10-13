#include <stdio.h>
#include <stdlib.h>

int     main(void)
{
    int     *number = malloc(sizeof(int));
    int     *result = malloc(sizeof(int));
    int     i;
    
    printf("Please enter a number :");
    scanf("%d", number);//13
    *result = 0;
    
    for (i = 1; i <= *number; i+=2)
    {
        *result = *result + i ; 
    }
    printf("The sum of the odd numbers from 1 to %d is:%d",*number , *result);
    free(number);
    free(result);
    return 0;
}