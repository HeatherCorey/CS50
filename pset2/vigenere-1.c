#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char keyPos(char k);
char vigPos(char c, char k);

int main(int argc, string argv[])
{
    if(argc != 2)  //only 2 arguments allowed
    {
        printf("Usage: Please execute exactly two arguments: the program name and a string.\n");
        return 1;
    }
    
    string text = GetString();
    char k;
    
    for(int i = 0, n = strlen(text); i < n; i++)   //loop through user's text
    {
        k = argv[1][i % strlen(argv[1])];  //set k equal to [i]th char of key

        k = keyPos(k); //call keyPos; set k to alphabetical position; eg A = 0
        char c = text[i];  //set c to each char in text
        if(isalpha(text[i]))
        {
            c = vigPos(c, k);  //change c by vigPos
        }
        printf("%c",c);
    }
    printf("\n");
    return 0;
}

char keyPos (char k)
{
    if(isupper(k))
    {
        k -= 65;
        return k;
    }
    else if(islower(k))
    {
        k -= 97;
        return k;
    }
    else
    {
        return k;
    }
}

char vigPos(char c, char k)
{
    if (isupper(c))
        {
            c -= 65;
            c = (c + k) % 26;
            c += 65;
            return c;
        }
    else if (islower(c))
        {
            c -= 97;
            c = (c + k) % 26;
            c += 97;
            return c;
        }
    else
    {
        return c;
    }
}
