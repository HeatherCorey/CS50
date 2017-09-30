#include <stdio.h>
#include <cs50.h>
#include <math.h>



int main(void)
{
    printf("How many orange slices would you like to eat? ");
    float slices = GetFloat();
    float oranges = ceil(slices/8);
    printf("\tIf you'd like to eat %.f orange slices,\n\
    \tyou should buy %.f oranges!\n",slices,oranges);
} 
