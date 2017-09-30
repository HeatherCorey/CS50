#include <cs50.h>
#include <stdio.h>
#include <string.h>

int* addElement(int* a, int n);
void printArray(int* a);

int size;

int main(void)
{
    size = 0;
    int* a = malloc(0 * sizeof(int));
    a = addElement(a, 7);
    a = addElement(a, 9);
    a = addElement(a, 10);
    a = addElement(a, 2);
    printArray(a);
    free(a);
}

int* addElement(int* a, int n)
{
    size++;
    int* b = malloc(size * sizeof(int));
    for(int j = 0; j < size - 1; j++)  //because we increased size by one
    {
        *(b + j) = *(a + j);   // b and a are base address; j is offset 
    }
    *(b + size - 1) = n;
    free(a);
    return b;
}

void printArray(int* a)
{
    for(int i = 0; i < size; i++)
    {
    printf("%i\n",*(a + i));
    }
    printf("\n");
}
