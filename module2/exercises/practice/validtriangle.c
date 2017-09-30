#include <stdio.h>
#include <cs50.h>

bool valid_triangle (float a, float b, float c);

int main(void)
{
    printf("Please give me the length of the first side of the triangle: ");
    float a = GetFloat();
    
    printf("Please give me the length of the second side of the triangle: ");
    float b = GetFloat();
    
    printf("Please give me the length of the third side of the triangle: ");
    float c = GetFloat();

    bool  = valid_triangle (float a, float b, float c);
    
    if (bool true == true)
    {
        printf("This is a valid triangle!");
    }
    else
    {
        printf("This is not a valid triangle.");
    }
}


bool valid_triangle (float a, float b, float c)
{
    if (a > 0 && b > 0 && c > 0)
    {
        if ((a + b) > c || (a + c) > b || (b + c) > a)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        return false;
    }
}