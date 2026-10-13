#include <stdio.h>
#include <stdlib.h>

int   main()
{
    int     *number;
    int     old_size;
    int     new_size; //A variable in which we store the new size that the user enters

    old_size = 3;
    number = malloc(old_size *sizeof(int)); 

    if (number == NULL)//// Verify that the memory reservation was successful and that there is no problem with the RAM
    {
        return 1 ;//The program closed due to a memory error
    }
    int     i;
    for (i = 0; i < old_size; i++)// // Enter the first 3 numbers
    {
        printf("Enter number %d: ",i+1);
        scanf("%d",&number[i]);
    }
    printf("Enter new size: ");//// Request a new size from the user (expand or collapse the table)
    scanf("%d",&new_size);

    int *temp = realloc(number , new_size * sizeof(int));  // Resize the array

    if(temp == NULL)
    {
        free(number);
        return 1;
    }

    number = temp;

    for(i = old_size; i < new_size; i++)// If the new size is bigger, enter the new numbers
    {
        printf("Enter new size %d: " , i + 1);
        scanf("%d",&number[i]);
    }

    printf("Array ");

    for (i = 0; i < new_size; i++)
    {
        printf("%d ",number[i]);
    }
    printf("\n");

    free(number);
    return 0 ;
}