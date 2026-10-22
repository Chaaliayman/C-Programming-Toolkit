#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
   unsigned int     i;

    i = 0;
    while (i < n && s1[i] == s2[i] && s1[i] && s2[i])
    {
        i++;
    }
    if(i == n)
        return 0;
    return ((unsigned char) s1[i]- (unsigned char) s2[i]);
}
int main ()
{
    //char s1[] = "AYMAN CHAALI";
    ///char s2[] = "AYMAN CHAALI";

    printf("%d", ft_strncmp("ABC" , "AB" , 3));
    return (0);
}