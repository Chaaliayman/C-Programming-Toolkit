#include <stdio.h>
#include <math.h>

int main ()
{
    double     let1;
    scanf("%lf",&let1);
    double     let2;
    scanf("%lf",&let2);
    
    double res;
        
    res =sqrt(pow(let1 , 2) + pow(let2 , 2));
    printf("%lf",res);
}