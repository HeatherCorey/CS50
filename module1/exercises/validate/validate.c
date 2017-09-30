#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n;
    do
    {
        printf("Please give me an even integer: ");
        n = GetInt();
    }
    while (n%2!=0);
    printf("Thanks for the even integer!\n");
}