#include <stdio.h>

void ft_swap(int *a , int *b)
{
    int     tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}
int main ()
{
    int x = 10; 
    int y = 15;
    ft_swap(&x, &y);
	printf("x = %d , y = %d\n", x, y);
    return (0);
}
