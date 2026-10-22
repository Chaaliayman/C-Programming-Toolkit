#include <stdio.h>
#include <stdbool.h>

bool    checkValidString(char* s)
{
    int     i;
    int     maxopen;
    int     minopen;

    i = 0;
    maxopen = 0;
    minopen = 0;
    while (s[i])
    {
        if (s[i] == '(')
        {
            maxopen++;
            minopen++;
        }
        else if (s[i] == ')')
        {
            maxopen--;
            minopen--;
        }
        else if (s[i] == '*')
        {
            minopen--;
            maxopen++;
        }
        if(maxopen < 0)
            return false;
        if (minopen < 0)
            minopen = 0;
        i++;
    }
    return minopen == 0; 
}

int     main()
{
    char s[] = "(*)";
    if(checkValidString(s))
        printf("true"); // true
    else
       printf("false"); 
}