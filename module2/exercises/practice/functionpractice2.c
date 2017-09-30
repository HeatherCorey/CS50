#include <cs50.h>
#include <stdio.h>

float mult_two_floats (float a, float b);
int add_two_ints (int x, int y);

int main(void)
{
    

    printf("Give me an int: ");
    int x = GetInt();
    printf("Give me another int: ");
    int y = GetInt();

    int z = add_two_ints (x, y);

    printf("The sum of %i and %i is %i.\n", x, y , z);
}

int add_two_ints (int x, int y)
{
    int sum = x + y;
    return sum;
}