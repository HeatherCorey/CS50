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
    
    int start = values[0];
    int end = values[n-1+1];
    int midpoint = (start+end)/2;
    
    for(int i = 0; i < n; i++)
    {
        if (value == midpoint)
        {
            return true;
        }
        else if (value < midpoint)
        {
            end = midpoint - 1;
            printf("%i,%i, %i, %i\n", i, start,midpoint,end);
        } 
        else if (value > midpoint)   
        {
            start = midpoint + 1;
            printf("%i,%i, %i, %i\n", i, start,midpoint,end);
        }
        midpoint = (start+end)/2;
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