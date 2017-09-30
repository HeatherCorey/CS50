/**
* Filename: wordgridstretch.c
* Save in Folder: ~/workspace/module4/studios/wordgridstretch
*
* The word grid is back with a vengence!
*
* Just like last week, this studio involves taking some strings from the user, and then printing them back out in a transformed way.
*
* Today, your program will apply a "stretch" factor to the grid of letters, making it larger.
* 
* It is easiest to explain via example. The finished program should behave like this:
* 
* $ ./wordgridstretch goat crab bear
* Your word grid currently looks like this:
* goat
* crab
* bear
* Now I will stretch it out. How much should I stretch by?
* 3
* After stretching by 3, you now have this!
* gggoooaaattt
* gggoooaaattt
* gggoooaaattt
* cccrrraaabbb
* cccrrraaabbb
* cccrrraaabbb
* bbbeeeaaarrr
* bbbeeeaaarrr
* bbbeeeaaarrr
* That's what we mean by "making the grid larger".
* 
* Validation
* 
* Don't forget to validate the user's input. Specifically, you'll want to ensure:
* 
*   1. that the user gave you exactly 3 words as command-line arguments
*   2. that those words are all the same length
*   3. that the user provides a non-negative stretch factor
*  
* Submitting
* 
* You don't have to submit stretchvertical.c and stretchhorizontal.c. You only have to submit wordgridstretch.c.
*/

#include <cs50.h>
#include <stdio.h>
#include <string.h>

void wordgrid(int argc, char* argv[]);
void gridstretch(int argc, char* argv[], int stretch);

int main(int argc, char* argv[])
{
    for (int i = 1; i < 3; i++)//how many args am i comparing)
    {
        if(argc != 4 || strlen(argv[i]) != strlen(argv[i+1]))
        {
            printf("Usage: Please enter exactly four arguments: the program name\n\
            and three words of equal length.\n");
            return 1;
        }
    }
    printf("Your word grid currently looks like this:\n");
    
    wordgrid(argc, argv);
    
    printf("By how many units should we stretch the grid?\n");
    int stretch;
    
    do
    {
        stretch = GetInt();
    }
    while(stretch < 0);

    printf("Stretching...\n");
    
    gridstretch(argc, argv, stretch);
}

void wordgrid(int argc, char* argv[])
{
    for (int i = 1; i < argc; i++)
        {
            for(int j = 0; j < strlen(argv[1]); j++)
            {
                printf("%c", argv[i][j]);
            }
            printf("\n");
        }
}

void gridstretch(int argc, char* argv[], int stretch)
{
    for (int i = 1; i < argc; i++)  //ith arg
        {
            for(int h  = 0; h < stretch; h++) //h stretch horiz
            {
                for(int j = 0; j < strlen(argv[1]); j++)  //jth char of ith arg
                {
                    for(int v = 0; v < stretch; v++)  //v stretches vert
                    {
                        printf("%c  ", argv[i][j]);
                    }
                }
                printf("\n");
            }
        }
}