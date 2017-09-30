#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;
    int spaces = 0;
    int hashes = 2;
    
    printf("You're nearing the end of Level 1-1!\n\
    How tall is the block pyramid that stands between Mario and the castle?\n");
    
    do
    {
        printf("Please enter a positive integer between 1 and 23: \n");
        height = GetInt();
    }
    while (height < 0 || height >23);  //check input
     
    
    for (int x = 0; x < height; x++)    //print as many lines as height
    {
        for(int y = -1; y < (height + 1 - hashes); y++)
        {
            printf(" ");
        }
        for(int z = 0; z < hashes; z++)
        {
            printf("#");
        }
        printf("\n");
        spaces--;
        hashes++;
    }
}.