#include <stdio.h>
void    nth_char(char *str, int n)
{
    int     i;

    i = n - 1; //1 0 
    while (str[i])
    {
        if(str[i] >= 32 && str[i] <= 126)
        printf("%c",str[i]);
        i += n;//   Y a
    }
}
int main ()
{
    nth_char("AYMAN",5);
}