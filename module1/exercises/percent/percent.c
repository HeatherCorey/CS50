#include <cs50.h>
#include <stdio.h>

int main(void)

{
    printf("Please enter a floating point number: ");
    float a = GetFloat();
    
    printf("Please enter another floating point number: ");
    float b = GetFloat();
    
    
    printf("The ratio between %f and %f is %f.\n", a,b,a/b*100);
}