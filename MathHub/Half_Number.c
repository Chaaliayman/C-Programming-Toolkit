#include <stdio.h>

int main ()
{
    float result ,  n;
    
    printf("Enter a number: ");
    scanf("%f",&n);

    result = n / 2;
    printf("half of %.1f is %.1f",n,result);
    return (0);
}