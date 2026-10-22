#include <stdio.h>

int ft_str_is_printable(char *str)
{
    int     i;

    i = 0;
    while(str[i])
    {
        if(!(str[i] >= ' ' && str[i] <= '~'))
            return 0;
        i++;
    }
    return 1;
}
int main()
{
    char  str1[] = " ";
    char  str2[] = "1234";
    char  str3[] = "abc\tdef";

    printf("%d \n",ft_str_is_printable(str1)); //1
    printf("%d \n",ft_str_is_printable(str2));//1
    printf("%d \n",ft_str_is_printable(str3));//0
}