#include <stdio.h>

void    remove_spaces(char *str)
{
    int     i;

    i = 0;
    while (str[i])
    {
        if(str[i] != ' ')
        {
            printf("%c",str[i]);
        }
        i++;
    }
}
int main ()
{
    char    *str = "HELLO WORLD CH  ";
    remove_spaces(str);
}