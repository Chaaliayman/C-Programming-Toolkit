#include <stdio.h>
#include <stdbool.h>

void    ft_printf_line(int width , bool x)
{
    int     i;

    for (i = 0; i < width; i++)
    {
        if (x == false)
        { 
            printf("**********");//***** */
            x = true;
        }
        else{
           printf("          ");
           x = false ;
        }
    }
}
    
void    ft_printf_square(int width , bool x)
{
    int     j;

    for (j = 0; j < 3; j++)
    {
        ft_printf_line(width , x);
        printf("\n");
     }
}  

void    ft_printf_table(int w , int h)
{
    bool    a; 
	int		n;
	
    a = false;
    for (n= 0; n < h ;n++)
    { 
        ft_printf_square(w, a);
        if(a == false)
            a = true ;
        else
            a = false; 
    }        
}