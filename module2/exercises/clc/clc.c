#include <cs50.h>
#include <stdio.h>

int main (int argc, string argv[2])
{
    float x = atof(argv[1]);
    float y = atof(argv[2]);
    float z = x + y;
    
    printf("The sum of %f and %f is %f.\n", x, y, z);
}