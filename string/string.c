#include <stdio.h>

void    ft_strintg(char *str)
{
    int     i;

    i = 0;
    while (str[i] != '\0')
    {
        printf("%c",str[i]);
        i++;
    }
}
int main ()
{
    char *str = "HELLO WORLD";
    ft_strintg(str);
}