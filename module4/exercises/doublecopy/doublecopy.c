#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    printf("So, what's on your mind: ");
    char *input = GetString();
    
    char *twiceInput = malloc((strlen(input) * 2 + 1) * sizeof(char));

    for (int j = 0, n = strlen(input) * 2; j < n; j++)
        {
            twiceInput[j] = input[j % strlen(input)];
            //k = argv[1][j % strlen(argv[1])]
        }
        
    printf("%s\n", twiceInput);
}