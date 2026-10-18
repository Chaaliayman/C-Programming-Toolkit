#include <unistd.h>

void ft_last_digit(int n)
{
    char c = n % 10 + '0';
    write(1,&c,1);
}
int main ()
{
    ft_last_digit(2147483647);
    return (0);
}
