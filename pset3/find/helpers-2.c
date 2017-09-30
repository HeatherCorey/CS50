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
    
    int min = values[0];
    int max = values[n-1];
    
    //printf("min: %i        max: %i\n",min,max);
    
    while (max > min)
    {
        int mid = values[n/2];
        //printf("min: %i mid:%i, max: %i\n", min,mid,max);
        if (value == mid)
        {
            return true;
        }
        if (value < mid)
        {
            max = mid - 1;
        } 
        if (value > mid)   
        {
            min = mid + 1;
        }
        //printf("min: %i max:%i, mid: %i\n", min,mid,max);
        n = n / 2;
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
                values[i] = values[i+1];
                values[i+1] = temp;
                
                swaps ++;
            }
        }
    }
    while(swaps != 0);
    return;
}