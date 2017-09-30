#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, string argv[])
{
    if(argc != 2 || argv[1] == NULL)
        {
        // Output the restaurant's welcome message:
        printf("Usage: Please enter %s + the filename you'd like to reference.\n", argv[0]);
        return 1;
        }
    printf("\nWelcome to Better Burger, home of the Marginally Better Burger!\n\n");
    printf("MENU:\n");
    // PUT YOUR CODE HERE: Open the file, based on the file name supplied in the command line
    char* line = malloc(sizeof(char) * 256);
    FILE* goodBurger = fopen(argv[1], "r");
    int i = 1;
    while(fgets(line, 256, goodBurger) != NULL)
    {
        printf("%i. %s", i, line);
        i++;
    }
    printf("\n\n");
    free(line);
    fclose(goodBurger);
    return 0;
    // PUT YOUR CODE HERE:
    // loop through each line in the input file
    // For each item, output its item number and value

    // PUT YOUR CODE HERE: Close the file

}