#include <stdio.h>
#include <cs50.h>

string phrase;
int how_many;
int main(void) 
{
    printf("Please give me a phrase: ");
    phrase = GetString();
    
    while (how_many < 1 || how_many > 100)
    {
        printf("How many times should I say it? ");
        how_many = GetInt();
    }
    
    for (int i = 0; i < how_many; i++)
    {
        printf("%s\n",phrase);
    }
}