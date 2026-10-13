#include <stdio.h>
#include <stdlib.h>

int     create_number(int *p)
{
    if(p != NULL)
        *p = 42;
}
int main ()
{
    int     *p;
    
    p= malloc(sizeof(int));
    if (p != NULL)
    {
        *p = 10;
        create_number(p);
        printf("%d\n", *p);
        free(p);
        p = NULL;
    }
    return (0);
}