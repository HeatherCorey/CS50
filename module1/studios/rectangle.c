#include <stdio.h>
#include <cs50.h>

int height;
int width;
int x;
int y;

int main(void)
{
    printf ("Please specify the desired width of the rectangle: ");
    width = GetInt();
    
    printf("Please specify the desired height of the rectangle: ");
    height = GetInt();
    
    
    for (y = 0; y < height; y++)
        {
        for (x = 0; x < width; x++)
            {
                printf("<3");
            }
            {
            printf("\n");
            }
        }
            
        }