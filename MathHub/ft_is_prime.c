#include <stdio.h>

int     ft_is_prime(int nb)
{
    int i = 1;
    if(nb < 0)
    {
        return 0 ;
    }
    while(i <= nb / 2)
    {
        if(nb % 2 == 0)
        {
            return 0;
        }
        i++;
    }
    return 1;
}
int main()
{
    int prime_and_not_prime = 4;
    printf("%d",ft_is_prime(prime_and_not_prime));
    return (0);
}
