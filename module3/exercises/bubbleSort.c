#include <cs50.h>   //            O(n^2)   look at nested loops
#include <stdio.h>

void bubbleSort(int a[]);

int main(void)
{
    int sortThis[] = {3, 1, 4, 5, 9, 2, 6, 8};
    
    bubbleSort(sortThis);
    
    for (int i = 0; i < 8; i++)
    {
        printf("%i", sortThis[i]);
    }
    printf("\n");
}

void bubbleSort(int a [])
{
    int swaps;
    do
    {
        swaps = 0;
        for(int i = 0; i < 7; i++)
        {
            if(a[i] > a[i+1])
            {
                int temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
                
                swaps ++;
                 for (int j = 0; j < 8; j++)
                {
                    printf("%i", a[j]);
                }
                    printf("\n");
                }
        }
    }
    while(swaps != 0);
}