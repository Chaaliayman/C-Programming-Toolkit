#include <stdio.h>
#include <stdlib.h>

int* plusOne(int* digits, int digitsSize, int* returnSize) 
{
    int *result = malloc((digitsSize + 1) * sizeof(int));
    for (int i = 0; i < digitsSize ;i++)
    {
        result[i] = digits[i];
    } 
    for(int i = digitsSize - 1; i >= 0; i--)
    {
        if(result[i] < 9)
        {
            result[i]++;
            *returnSize = digitsSize;
            return result; 
        }
        result[i] = 0;
    }

    //// If all digits are 9 (e.g., [9] becomes [1, 0])
    result[0] = 1;
    result[digitsSize] = 0;

    *returnSize = digitsSize + 1;
    return result;
}  
int main()
{
    int digits [] = {4,3,2,1};
    int  digitsSize = 4;
    int returnSize;

    int *result = plusOne(digits,digitsSize, &returnSize);
    printf("result : ");
    for (int i = 0; i < returnSize ; i++)
    {
        printf("%d", result[i]);
    } 
    free (result);
}