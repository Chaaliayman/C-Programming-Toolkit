#include <stdio.h>

int main ()
{
     int years, months, days, hours, minutes, seconds;
    
    printf("Enter the number of years : ");
    scanf("%d", &years);

    months = years * 30; // Calculate total months (1 year = 12 months)
    days = years * 365;// Calculate total days (1 year = 365 days)
    hours = days * 24;
    minutes = hours * 60;
    seconds = minutes * 60;

    printf(" %d year(s) contains:\n", years); 
    printf("- %d months:\n", months); 
    printf("- %d days\n", days); 
    printf("- %d hours\n", hours); 
    printf("- %d minutes\n",minutes ); 
    printf("- %d seconds\n", seconds );
     return (0);
}
