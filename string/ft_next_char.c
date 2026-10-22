#include <unistd.h>
#include <stdio.h>

int main (int ac , char **av)
{
    int     i;

    i = 0;
    if(ac == 2)
    {
        while (av[1][i])
        {
            if(av[1][i] == 'z' || av[1][i] == 'Z')
            {
                av[1][i] -= 25;
            }
            else if  (av[1][i] >= 'a' && av[1][i] <= 'z' ||
                av[1][i] >= 'A' && av[1][i] <= 'Z')
                av[1][i] += 1;
             printf("%c",av[1][i]);
             i++;
        } 
    }
}