#include <stdio.h>
#include <stdlib.h>

int     *alloue_vecteur(int dimension, int val)
{
    int     *vecteur;
    int     i;

    vecteur = malloc(dimension * sizeof(int));
    if(vecteur == NULL)
        return(NULL);
    for (i = 0; i < dimension; i++)
    {
        vecteur[i] = val;
    }
    return vecteur;
}

void    libere_vecteur(int *vecteur)
{
    free(vecteur);
}

int main ()
{
    int     *vecteur;
    int     dimension;
    int     val;
    int     i;

    dimension = 5;
    val = 3;

    vecteur = alloue_vecteur(dimension , val);
    if(vecteur == NULL)
    {
        printf("Memory allocation failed\n");
        return 1 ;
    }
        
    for (i = 0; i < dimension; i++)
    {
        printf("%d ",vecteur[i]);
    }
    libere_vecteur(vecteur);
    vecteur = NULL;
}