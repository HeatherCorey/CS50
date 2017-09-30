#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int alphaPos(char c);
int toCyph(int c, int k);
int cyphPos (int c);

int main(int argc, string argv[])
{
    if(argc != 2)  //only 2 arguments allowed
    {
        printf("Usage: Please execute exactly two arguments: the program name and an integer.\n");
        return 1;
    }
    
    printf("Please enter some plain text.\n");  //get string from user
    string text = GetString();
    
    char c;  //for use with alphaPos
    
    for(int i = 0, n = strlen(text); i < n; i++)   //loop through user's string
    {
        int k = atoi(argv[1]);  //convert string to integer
        c = text[i];  //set c to each char in text
        c = toCyph(c,k); //call toCyph to update to c + k % 26
        c = cyphPos(c);  //call cyphPos to return c to its ascii pos
        printf("%c",c);
    }
    printf("\n");
}

int alphaPos(char c)
{
    if (isupper(c))
        {
            return c -= 65;
        }
    else if (islower(c))
        {
            return c -= 97;
        }
    else
    {
        return c;
    }
}

int toCyph(c,k)
{
    if (isupper(c))
        {
            return c = (c + k) % 26;
        }
    else if (islower(c))
    {
        return c = (c + k) % 26;
    }
    else
    {
        return c;
    }
}

int cyphPos(c)
{
    if (isupper(c))
    {
        return c += 65;
    }
    else if (islower(c))
        {
            return c += 97;
        }
    else
    {
        return c;
    }
}
