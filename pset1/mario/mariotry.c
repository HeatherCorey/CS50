#include <stdio.h>
#include <cs50.h>

int input;
int main(void)

{
    do
    {
        printf("Please enter a positive integer between 1 and 23: ");
        input = GetInt();
    }
    while (input<1 || input>23);

    
}
