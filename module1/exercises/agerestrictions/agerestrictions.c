#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("How old are you? \n");
    int age = GetInt();
    
    if (age>20)
    {
        printf("You can drink!\n");
    }
    if (age>17)
    {
        printf("You can vote!\n");
    }
    if (age>15)
    {
        printf("You can drive!\n");
    }
    else
    {
        printf("Some day, kid...\n");
    }
}