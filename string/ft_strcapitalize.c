#include <stdio.h>

char *ft_strcapitalize(char *str)
{
    int     i;
    int     new_word;

    i = 0;
    new_word = 1;
    while(str[i])
    {
        if((str[i] >= 'a' && str[i] <= 'z')
        ||(str[i] >= 'A' && str[i] <= 'Z')
        || (str[i] >= '0' && str[i] <= '9'))
        {
            if(new_word && str[i] >= 'a' && str[i] <= 'z')
            {
                str[i] = str[i] - 32 ;
            }
            else if(!new_word && str[i] >= 'A' && str[i] <= 'Z')
            {
                str[i] = str[i] + 32;
            }
            new_word = 0 ;
        }
        else
        {
            new_word = 1 ;
        }
        i++;
    }
    return str ;
}
int main ()
{
    char str[] = "hi, how are you doing, Ayman 200?";

    printf("%s",ft_strcapitalize(str));
}