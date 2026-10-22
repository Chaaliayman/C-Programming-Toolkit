#include <stdio.h>

char    *ft_strcpy(char *dest, char *src)
{
    int     i;

    i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}
int main()
{
    char src[] = "HELLO WORLD";
    char dest[50];

    ft_strcpy(dest , src);

    printf("Src : %s\n", src);
    printf("Dest : %s\n", dest);
    return (0);
}