#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;
    int spaces = 22;
    int hashes = 2;
    
    printf("You're nearing the end of Level 1-1!\n\
    How tall is the block pyramid that stands between Mario and the castle?\n");
    
    do
    {
        printf("Please enter a positive integer between 1 and 23: \n");
        height = GetInt();
    }
    while (height < 0 || height >23);  //print as many lines as height
     
    
    for (int x = 0; x < height; x++)    //print as many spaces
    {
        for(int y = 0; y < spaces; y++)
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
}