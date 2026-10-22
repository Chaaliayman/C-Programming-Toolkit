#include <stdio.h>
 
int     ft_ft(int *nbr)
{
    *nbr= 42;
}
int main ()
{
    int     p ;
    p = 10;
       ft_ft(&p);
        printf("%d\n", p);
     return (0);
}