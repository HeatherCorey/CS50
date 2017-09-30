#include <cs50.h>
#include <stdio.h>

void Multiply (int product);

int main(void)
{
    printf("Please enter an int: ");
    int x = GetInt();
    printf("Please enter another int: ");
    int y = GetInt();
    Multiply(x * y);
}

void Multiply(int product)
{
    printf("The product of your chosen integers is: %i\n", product);
}