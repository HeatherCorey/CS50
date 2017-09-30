#include <stdio.h>
#include <cs50.h>

int height;
int main(void)
{
    do
    {
        printf("Please enter a positive integer between 1 and 23: ");
        height = GetInt();
    }
    while (height<0 && height>23);
    
    for (int i = 0; i < height; i++)
    {
        char space =' ';
        char hash ='#';
        printf ("%c,%c\n"); space, hash;
    }
}