#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[3])
{
    for (int i = 0; i < argc ; i++)
    {
        for (int j = strlen(argv[i]); j > -1; j--)
        printf("%c", argv[i][j]);
        printf(" ");
        }
    printf("\n");
}