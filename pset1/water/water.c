#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("How many minutes do you typically spend in the shower? ");
    int minutes = GetInt();
    int water_used = minutes * 12;
    printf("If you spend %i minutes in the shower, you're using %i bottles of water!\n",minutes,water_used);
}