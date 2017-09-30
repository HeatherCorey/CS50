#include <stdio.h>
#include <cs50.h>
#include <string.h>

// TODO: add the function signature for customstrcmp
bool customstrcmp(char* a, char* b);

int main(void){
    printf("\nString 1?: ");
    char* string1 = GetString();
    printf("\nString 2?: ");
    char* string2 = GetString();

    bool areEqual = customstrcmp(string1, string2);

    if (areEqual){
        printf("\nBingo! The strings are equal!\n");
    } else {
        printf("\nThe strings are not equal!\n");
    }
}

bool customstrcmp(char* a, char* b)
{
    if (strlen(a) != strlen(b))
    {
        return false;
    }
    if (a && b != NULL)
    {
        if (strcmp(a, b) == 0)
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