#include <cs50.h>
#include <stdio.h>
#include <string.h>

int letterCount(string word, char letter);

int main(void)
{
    string word = "goodbye";
    int count = letterCount(word, letter);
    printf("%s  %d\n",word, count);
    word = "google";
    count = letterCount(word, letter);
    printf("%s  %d\n",word, count);
    word = "hello";
    count = letterCount(word, letter);
    printf("%s  %d\n",word, count);
}

int letterCount(string word, char letter)
{
    int count = 0;
    for(int i = 0; i < strlen(word); i++)
    {
        if(word[i] == letter)
        {
            count++;
        }
    }
    return count;
}
