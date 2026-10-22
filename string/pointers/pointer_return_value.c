#include <stdio.h>

int     pointer_return_value(int *n)
{
    *n = 10;
    return(*n + 3);
}
int main()
{
    int omiga , sigma ;
    omiga = pointer_return_value(&sigma);
    if(omiga != 0 && omiga == sigma + 3)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
    return 0;
}