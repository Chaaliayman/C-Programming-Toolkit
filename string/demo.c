#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    srand(time(NULL));

    int dice = 3;
    int rall = 0;

    for(int i = 0; i < dice;i++)
    {
        rall = rand() % 6 + 1;
        printf("Dice %d : %d \n" , i , rall);
    }
    return (0);
}