#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool    isVowlsChar(char c)
{
    if((c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' )||
      (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'))
        return true;
    else
        return false;
}
void    swap(char *S1 , char *S2)
{
    char    tmp;

    tmp = *S1;
    *S1 = *S2;
    *S2 = tmp;
}
char    *reverseVowels(char *s)
{
    int     i;
    int     j;

    i = 0;
    j = strlen(s) - 1;
    while(i < j)
    {
        if(isVowlsChar(s[i]) == true && isVowlsChar(s[j]) == true)
        {
            swap(&s[i] , &s[j]);
            i++;
            j--;
        }
        else if(isVowlsChar(s[i]) == false && isVowlsChar(s[j]) == true)
        {
            i++;
        }
        else if(isVowlsChar(s[j]) == false)
        {
            j--;
        }
    }
    return s;
}
int main ()
{
    char str1 []= "IceCreAm";
    char str2 [] = "leetcode";
    printf("%s \n",reverseVowels( str1));
    printf("%s",reverseVowels( str2));
}