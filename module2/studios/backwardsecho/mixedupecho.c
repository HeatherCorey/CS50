#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[2])
{
    if (argc != 2)
    {
        printf("Usage: Please enter exactly two command line arguments.\n");
        return 1;
    }
    else
    {
        for (int i = 0; i < strlen(argv[0]); i++)
            {
                {
                    printf("%c", argv[0][i]);
                    printf("%c", argv[1][i%strlen(argv[1])]);
                }
            }
        printf("\n");
    }
}



