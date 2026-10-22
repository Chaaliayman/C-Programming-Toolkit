#include <stdio.h>

void	ft_rev_str(char *str, int size)
{
    int     i;
    char     tmp;


    i = 0;
    
    while (i < size / 2)
    {
        tmp = str[i];
        str[i] = str[size - i - 1];
        str[size - i - 1] = tmp;
        i++;
    }
}

int main()
{
    char str[] = "HELLO";
    ft_rev_str(str , 7);

    printf("%s", str);
}