#include <stdio.h>

int     ft_fibonacci(int index)
{
    if(index <= 0) //Base Cases)
    {
        return 0;
    }
    else if(index == 1)//Base Cases
    {
        return 1;
    }
    return(ft_fibonacci(index - 1) + ft_fibonacci(index - 2));//Recursive Call
}

int main(void)
{
    int index = 5;
    printf("%d",ft_fibonacci(index));//Print Result (5)
    return (0);
}
