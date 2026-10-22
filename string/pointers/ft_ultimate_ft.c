#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
    *********nbr = 42;
}
int main ()
{
    int a = 1;
    int *P1 = &a;
    int **P2 = &P1;
    int ***P3 = &P2;
    int ****P4 = &P3;
    int *****P5 = &P4;
    int ******P6 = &P5;
    int *******P7 = &P6;
    int ********P8 = &P7;
    int *********P9 = &P8;

    ft_ultimate_ft(P9);
    printf("%d\n", a);
    return (0);
}