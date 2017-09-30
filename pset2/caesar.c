#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char cypherPos(char c, char k);

int main(int argc, string argv[])
{
    if(argc != 2)  //only 2 arguments allowed
    {
        printf("Usage: Please execute exactly two arguments: the program name and an integer.\n");
        return 1;
    }
    
    string text = GetString();
    
    for(int i = 0, n = strlen(text); i < n; i++)   //loop through user's string
    {
        int k = atoi(argv[1]);  //convert string to integer
        char c;  //for use with cyperPos
        c = text[i];  //set c to each char in text
        c = cypherPos(c, k);  //call cypherPos, passing in chars c & k; store value in c
        printf("%c",c);
    }
    printf("\n");
    return 0;
}

char cypherPos(char c, char k)
{
    if (isupper(c))   //if uppercase
        {
            c -= 65;   //bring c to alphabetical position: eg A=0
            c = (c + k) % 26;  //add key value to alphabetical position % 26
            c += 65;  //convert back to ascii value
            return c;
        }
    else if (islower(c))  //if lowercase
        {
            c -= 97;  // //bring c to alphabetical position: eg a=0
            c = (c + k) % 26;  //add key value to alphabetical position % 26
            c += 97;    //convert back to ascii value
            return c;
        }
    else
    {
        return c;
    }
}
