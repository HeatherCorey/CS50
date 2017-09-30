#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int letterLocator(string word);

int main(void)
{
    char c;
    do
    {
        printf("Give me a letter: ");
        c = GetChar();
    }
    while (!isalpha (c));

    if (isupper(c))
        {
            printf("%c is in position %i\n", c, c - 65);
        }
    else
        {
            printf("%c is in position %i\n", c, c - 97);
        }
}