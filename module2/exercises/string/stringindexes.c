#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    printf("Please enter a string: ");
    string user_input = GetString();
    
    if (user_input != NULL)
    {
        for(int i = 0, n = strlen(user_input); i < n; i++)
        {
            printf("The character at index %i is %c\n", i, user_input[i]);
        }
    }
}