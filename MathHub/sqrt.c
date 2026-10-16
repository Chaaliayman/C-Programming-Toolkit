#include <stdio.h>

int    sprt(int x)
{

    if(x < 0)
    {
        return 0;
    }
    long I = 1 ;
    while(I * I  <= x) 
    {
        I++;
    }
    return I - 1;
}

int main ()
{
    int i = 4;
    printf("%d",sprt(i));
    return (0);
}