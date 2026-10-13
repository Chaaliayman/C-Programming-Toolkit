#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int     i;
    int     min;
    int     number;
    int     *T;
    
    printf("Please enter the size of the array: ");
    scanf("%d", &number);

    T = malloc(number * sizeof(int));

    if(T == NULL)
    {
        printf("Memory is not allocated");
        exit(0);
    }

    for (i = 0; i < number; i++)
    {
        printf("Enter element T[%d]= ", i);
        scanf("%d", T+ i);
    }

    min = *T;
    for(i = 0; i < number; i++)
    {
        if(min > *(T + i))
            min = *(T + i);
    }
    printf("The minimum value is: %d", min);
    free(T);
    return (0);
}