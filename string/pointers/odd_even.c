 #include <stdio.h>
 int main ()
 {
    int N ;
    int *P = &N;
    printf("Enter the number of years : ");
    scanf("%d",P);
    
    if(*P % 2 == 0)
    {
        printf("%d is an even number ", *P);
    }
    else
    {
        printf("%d is an odd number", *P);
    }
    return (0);
}