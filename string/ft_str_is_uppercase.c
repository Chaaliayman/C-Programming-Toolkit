#include <stdio.h>

int ft_str_is_uppercase(char *str)
{
    int     i;

    i = 0;
    while(str[i])
    {
        if(!(str[i] >= 'A' && str[i] <= 'Z'))
            return 0;
        i++;
    }
    return 1;
} 
int main ()
{
    char str1[] = "ayman";
    char str2[] = "AYMAN";
    char str3[] = "12345";
    
    printf("%d \n",ft_str_is_uppercase(str1));
    printf("%d \n",ft_str_is_uppercase(str2));
    printf("%d \n",ft_str_is_uppercase(str3));
}