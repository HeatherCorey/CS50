#include <stdio.h>
#include <cs50.h>

int answer = 7;
int guess;
int main(void)
{
    printf("I'm thinking of an integer between 1 and 10.\n\
    Can you guess what it is?\n");
        
    
    while (guess != answer && guess<6)
    {
        printf("Please enter an integer between 1 and 10: ");
        guess = GetInt();
        
        guess++;
        
        printf("That was guess # %i!\n",guess);
        
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