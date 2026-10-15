#include <stdio.h>
#include <stdlib.h>

char    matrix [3][3] =
{
    {'1' , '2' , '3' },
    {'4' , '5', '6' },
    {'7' , '8' , '9'} 
};
char    player ='X';
void    print_matrix()
{
    int     i;
    int     j;
    
    system("cls"); // system clear
    for(i = 0; i < 3;i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%c  ",matrix[i][j]);
        }
          printf("\n");
    }
  
}

void    play()
{
    char Pos ;
    int     i;
    int     j;

    printf("choose your position - player (%c)",player);
    scanf(" %c",&Pos);
    for (i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            if(matrix[i][j] == Pos)  
            {
                matrix[i][j] = player;
            }
        }
    }
    if(player == 'X')
    {
        player = 'O';
    }
    else
    {
        player = 'X';
    }
}

char    Winning_or_losing()
{
    int counters_X;
    int counters_O;
    int i;
    int j;
   int co = 0;
    counters_X = 0;
    counters_O = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if(matrix[i][j] != 'X' && matrix[i][j] != 'O')
            {
                co++;
            }
            if(matrix[i][j] == 'X')
            {
               counters_X ++; 
            }
             else if (matrix[i][j] == 'O')
            {
                counters_O++;   
            }
            if(counters_X == 3 || counters_O == 3)
            {
                if(counters_X > counters_O )
                {
                    return 'X';
                }
                else {
                    return 'O';
                }
            }
        }
        counters_X = 0;
        counters_O = 0;
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3 ; j++)
        {
            if(matrix[j][i] == 'X')
            counters_X++;
            else if(matrix[j][i] == 'O'){
                counters_O++;
            }
            if(counters_X == 3 || counters_O == 3)
            {
                if(counters_X > counters_O)
                {
                    return 'X';
                }
                else
                {
                    return 'O';
                }
            }
        }
        counters_X = 0;
        counters_O = 0;
    }
    if(matrix[0][0] == 'X' && matrix[1][1] == 'X' && matrix[2][2] == 'X' )
    {
        return 'X';
    }
    else if (matrix[0][0] == 'O' && matrix[1][1] == 'O' && matrix[2][2] == 'O' )
    {
        return 'O';
    }
    else if(matrix[0][2] == 'X'&& matrix[1][1] == 'X' && matrix[2][0] == 'X' )
    {
        return 'X';
    }
     else if(matrix[0][2] == 'O'&& matrix[1][1] == 'O' && matrix[2][0] == 'O' )
    {
        return 'O';
    }
    if (co == 0)
    {
        return 'Z';
    }

      return '.';
}

int main ()
{
    while(Winning_or_losing() == '.')
    {
        print_matrix();
        play();
    }
    char result = Winning_or_losing();
    if(result == 'Z')
    {
        printf("Player X wins!\n");
    }
    else if(result == 'O')
    {
        printf("Player O wins!\n");
    }
    else if(result == 'Z')
    {
         printf("Draw!\n");
    }
   system("pause");
}