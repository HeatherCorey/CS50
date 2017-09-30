#include <stdio.h>
#include <cs50.h>

int answer = 7;
int guess;
int main(void)
{
    printf("I'm thinking of an integer between 1 and 10.\n\
    Can you guess what it is?\n");
        
    
    for (int i = 1; guess != answer; i++)
    {
        printf("Please enter an integer between 1 and 10: ");
        guess = GetInt();
        
        printf("That was guess # %i!\n",i);
        
        if (guess == answer)
        {
            printf("Wow, that's right! Are you a mind reader??\n");
        }
        else
        {
            printf("Sorry, nope!\n");
        }
    }
}