#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char toInit(char c);

int main(void)
{
    string name = GetString();
    
    for(int i = 0; i < strlen(name); i++)
    {
        char c = name[i];
        
        if(i == 0 || isspace(name[i-1]))
        {
            c = toInit(c);
            printf("%c",c);
        }
    }
    printf("\n");
}

char toInit(char c)
{
    if(islower(c))
    {
        c = c - 97;
        c = c + 65;
        return c;
    }
    else
    {
        return c;
    }
}