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
 
// how do I factor out the manual typing and/or copy-pasting of
// printf("                     ##"); etc?



}