#include <stdio.h>

int     ft_str_is_numeric(char *str)
{
    int     i;

    i = 0;
    while(str[i] != '\0')
    {
        if(!(str[i] >= '0' && str[i] <= '9'))
            return (0);
        i++;
    }
    return (1);
}
int     main()
{
    char str1[] = "123456";
    char str2[] = "CHAALI";

    printf("%d\n", ft_str_is_numeric(str1));
    printf("%d\n", ft_str_is_numeric(str2));
}