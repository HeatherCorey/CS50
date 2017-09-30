#include <cs50.h>
#include <stdio.h>

int collatz(int n);
int main (void)
{
    printf("Please enter a positive integer: ");
    int n = GetInt();
    int answer = collatz(n);
    
    printf("It takes %i steps to return to one.\n",answer);
    return 0;
}

int collatz(int n)
{
    if(n == 1)
    {
        return 0;
    }
    if(n % 2 == 0)
    {
        return 1 + collatz(n / 2);
    }
    else
    {
        return 1 +collatz(3 * n + 1);
        
    }
}