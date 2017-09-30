#include <cs50.h>
#include <stdio.h>

void computeArray(int array[5]); 


int main(void)
{
    int a[5] = {1, 2, 3, 4, 5};
    computeArray(a);
}

void computeArray(int array[5])
{
    int max = array[0];
    
    for(int i = 0; i < 5; i++)
    {
        if(array[i] > max)
        {
            max = array[i];
        }
    }
    printf("Max is %i.\n", max);
    
    int min = array[0];
    
    for(int i = 0; i < 5; i++)
    {
        if(array[i] < min)
        {
            min = array[i];
        }
    }
    printf("Min is %i.\n", min);
    
    float avg = array[0];
    
    for(int i = 0; i < 5; i++)
    {
        avg = avg + array[i];
    }
    
    avg = avg / 5.0;
    
    printf("Average is %f.\n", avg);
}
