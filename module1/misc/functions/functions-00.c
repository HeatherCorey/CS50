
#include <cs50.h>
#include <stdio.h>


void Printage(int age);

int main(void)
{
    printf("Your age : ");
    int i = GetInt();
    Printage(i);
}

void Printage(int age)
{
    printf("hello, %i\n", age);
}
