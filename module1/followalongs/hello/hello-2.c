#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("State Your Name: ");
    string name = GetString();
    printf("hello, %s\n", name);
}