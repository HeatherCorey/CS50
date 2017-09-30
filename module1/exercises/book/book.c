#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("What's your favorite book? ");
    string book = GetString ();
    printf("I love %s!\n", book);
    printf("Actually, %s is kind of meh.\n", book);
}