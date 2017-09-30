#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void) 
{
    printf("Please enter a floating point dollar amount: ");
    float amount = GetFloat();
    
    amount = amount * 100;
    amount = round (amount);
    amount = amount / 100;
    
    printf("Did you mean $%.2f?\n",amount);
}