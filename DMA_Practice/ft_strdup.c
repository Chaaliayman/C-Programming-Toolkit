#include <stdio.h>
#include <stdlib.h>

int     strle(char *s)
{
    int     i;

    i =0;
    while(s[i] != '\0')
    {
        i++;
    }
    return i;
}
char *ft_strdup(char *src)
{
    char    *dup;
    int     len;
    int     i;

    len = strle(src);
    dup = malloc((len + 1) * (sizeof(char)));
    i = 0;
    if(dup == NULL)
    {
        return NULL;
    }
    while(src[i])
    {
        dup[i] = src[i];
        i++;
    }
   dup[i] = '\0';
   return dup;
}

int main ()
{
    char *str = "AYMAN  CHAALI";
    char *copy = ft_strdup(str);
    if(copy != NULL){
        
        copy[0] = 'W';
        copy[1] = 'A';
        copy[2] = 'S';
        copy[3] = 'S';
        copy[4] = 'I';
        copy[5] = 'M';
        copy[6] = ' ';
        printf("Original string:  %s\n",str);
        printf("Copied string:   %s\n",copy);


        free(copy);
    } 
}