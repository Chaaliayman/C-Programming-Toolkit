#include <stdio.h>
#include <stdlib.h>

int     *ft_range(int min, int max)
{
    int     *tab;
    int     i;

    if(min >= max)
    {
        return NULL;
    }
    tab = malloc((max - min) * sizeof(int));
    if(tab == NULL)
    {
        return NULL;
    }
    i = 0;
    while(min < max)
    {
        tab[i] = min;
        i++;
        min++;
    }
    return (tab) ;
}
int     main ()
{
    int     *tab;
    int     min;
    int     max;

    printf("Enter min: ");
    scanf("%d",&min);

    printf("Enter max: ");
    scanf("%d",&max);

    tab =    ft_range(min,max);
    if (tab == NULL)
    {
        printf("NULL\n");
        return (0);
    }
    for (int i = 0; i < max - min; i++)
    {  
        printf("%d ", tab[i]);
    }
    free(tab);
    return (0);
}