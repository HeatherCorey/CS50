/**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 */
       
#include <cs50.h>
#include <stdio.h>
#include "helpers.h"

bool search(int value, int values[], int n);
void sort(int values[], int n);

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    if (n < 0)
    {
        return false;
    }
    
    int min = 0;
    int max = n-1;
    
    //printf("min: %i        max: %i\n",min,max);
    
    while (max >= min)
    {
        int mid = (min + max) / 2;
        printf("min: %i mid:%i, max: %i\n", min,mid,max);
        if (value == values[mid])
        {
            return true;
        }
        if (value < mid)
        {
            max = mid - 1;
        } 
        else
        {
            min = mid + 1;
        }
        //printf("min: %i max:%i, mid: %i\n", min,mid,max);
    }
    return false;
}


/**
 * Sorts array of n values.
 */

void sort(int values [], int n)
{
    int swaps;
    do
    {
        swaps = 0;
        for(int i = 0; i < n; i++)
        {
            if(values[i] > values[i+1])
            {
                int temp = values[i];
                values[i+1] = values[i];
                values[i] = temp;
                
                swaps ++;
            }
        }
    }
    while(swaps != 0);
    return;
}