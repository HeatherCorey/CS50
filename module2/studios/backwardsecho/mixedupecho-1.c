#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[2])
{
    if (argc > 2)
    {
        printf("Usage: Please enter exactly two command line arguments.\n");
        return 1;
    }
    else
    {
        for (int i = 0; i < argc ; i++)
            {
                for (int j = 0, n = strlen(argv[i]); j < n; j++)
                {
                    printf("%c", argv[0][j]);
                    printf("%c", argv[1][j]);
                }
            }
        printf("\n");
    }
}

