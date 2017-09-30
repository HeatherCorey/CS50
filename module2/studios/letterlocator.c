#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int alphaPos(char c);

int main(void)
{
    char c;
    do
    {
        printf("Give me a letter: ");
        c = GetChar();
    }
    while (!isalpha (c));
    
    int answer = alphaPos(c);
    printf("%c is at position %i\n", c, answer);
}

char alphaPos(char c)
{
    if (isupper(c))
        {
            return c -= 65;
        }
    else
        {
            return c -= 97;
        }   
}