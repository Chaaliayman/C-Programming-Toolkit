#include <stdio.h>
#include <stdlib.h>

int     strlen(char *s)
{
    int     i;

    i = 0;
    while (s[i] != '\0')
    {
        i++;
    }
    return i ;
}

char    *reverse_string(char *str)
{
    int     len;
    int     i;
    char    *rev ;
    
    len = = strlen(str);
    rev= malloc((len + 1) * sizeof(char));
    i = 0;
    if (rev == NULL)
    {
        return NULL;
    }
    while (i < len)
    {
        
        rev[i] = str[len - i - 1];
        i++;
    }
    return rev ;
}

int main ()
{   
    char    *str; 
    char    *rev ;

    
    str = "HELLO";
    rev = reverse_string(str);

    printf("Original : %s", str);
    printf("reverse : %s", rev);

    free(rev);
}