#include <stdio.h>
#include <stdlib.h>

void    sortDesc(int *T , int n)
{
    int     i;
    int     j;
    int     tmp;

    for (i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(*(T + i) > *(T + j))
            {
                tmp = *(T + i);
                *(T + i) = *(T + j);
                *(T + j) = tmp;
            }
        }
    }
    printf("\nThe elements of the array in ascending order are: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", *(T + i));
    }
}

void    sortAsc(int *T , int n)
{
    int     i;
    int     j;
    int     tmp;

    for (i = 0; i < n ; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(*(T + i) < *(T + j))
            {
                tmp = *(T + i);
                *(T + i) = *(T + j);
                *(T + j) = tmp;
            }
        }
    }
    printf("\nThe elements of the array in ascending order are: ");
    for(i = 0; i < n;i++)
    {
        printf("%d ",*(T + i));
    }
}
int main ()
{
    int     n;
    int     i;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int *T = calloc(n , sizeof(int));
    printf("Enter the elements of the array: \n");
    for (i = 0; i < n; i++)
    {
        printf("Element %d : ",i + 1);
        scanf(" %d ", T + i);
    }
    sortDesc(T,n);
    sortAsc(T,n);
    
    free(T);
 
    return (0);
}