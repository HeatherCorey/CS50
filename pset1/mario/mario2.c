#include <stdio.h>
#include <cs50.h>

int main(void)

{
    //char space = ' ';
    //char hash = '#';
    //printf("%c%c%c\n",hash, space, hash);
    
    //executes properly

   // int spaces = 3;
   // int hashes = 2;
    
    
    int spaces = 22;
    int hashes = 2;
    
    for(int i = 0; i < 23; i++)
    {
        for(int x = 0; x < spaces; x++)
        {
            printf(" ");
        
        }
        for(int x = 0; x < hashes; x++)
        {
            printf("#");
        }
        printf("\n");
        spaces--;
        hashes++;
    }
}