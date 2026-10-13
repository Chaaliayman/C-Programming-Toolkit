#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    float *selling_price = malloc(sizeof(float));
    float *cost_price = malloc(sizeof(float));
    float *re = malloc(sizeof(float));

    printf("Please enter the cost price :");
    scanf("%f", selling_price);//
    printf("Please enter the sale price :");
    scanf("%f", cost_price);//30
    if (*selling_price > *cost_price) //120 > 30  
    {
        *re = *selling_price - *cost_price ; //30  
        printf("Loss = %.2f", *re);
    }
    else if ( *selling_price < *cost_price)
    {
        *re = *selling_price - *cost_price ;
        printf("Profit = %.2f",*re);
    }
    else
    {
        printf("Neither profit nor loss.");
    }
    free(selling_price);
    free(cost_price);
    free(re);
    return (0);
}