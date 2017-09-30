#include <stdio.h>
#include <cs50.h>
#include <string.h>


bool customstrcmp(char* s1, char* s2);

int main(void)
{
    printf("\nString 1?: ");
    char* string1 = GetString();
    printf("\nString 2?: ");
    char* string2 = GetString();

    bool areEqual = customstrcmp(string1, string2);

    if (areEqual)
        printf("\nBingo! The strings are equal!\n");
    else
        printf("\nThe strings are not equal!\n");
        
    return 0;
}

bool customstrcmp(char* s1, char* s2)
{
    if (s1 == NULL || s2 == NULL)
        return false;
        
    if(strlen(s1) != strlen(s2))
        return false;
        
    for (int i = 0, n = strlen(s1); i < n; i++)
        {
            if (*s1 + i == *s2 + i)
                return true;
        }
    return false;
}
/**
 * customstrcmp
 * iterates through two strings, character by character
 * returns true if they are exactly the same, otherwise returns false
 */
// TODO: implement customstrcmp here