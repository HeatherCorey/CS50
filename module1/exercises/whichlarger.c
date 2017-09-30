#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("Please enter an integer: ");
    int a = GetInt();
    
    printf("Please enter another integer: ");
    int b = GetInt();
    
    if (a>b)
    {
        printf("The first integer, %i, is larger.\n", a);
    }
    else if (a<b)
    {
        printf("The second integer, %i, is larger.\n",b);
    }
    else
    {
        printf("The integers are equal.\n");
    }
}