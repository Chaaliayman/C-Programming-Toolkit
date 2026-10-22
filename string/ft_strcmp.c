#include <stdio.h>

int strcmp(char *s1, char *s2)
{
    int     i;

    i = 0;
    while (s1[i] == s2[i] && s1[i] && s2[i])
    {
        i++;
    }
    return (s1[i] - s2[i]);
}
int main ()
{
    char s1[] = "AYMAN CHAALI";
    char s2[] = "AYMAN CHAALI";

    printf("%d", strcmp(s1 , s2));
    return (0);
}