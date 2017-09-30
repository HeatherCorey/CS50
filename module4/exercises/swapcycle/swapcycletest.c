#include <cs50.h>
#include <stdio.h>

void swapCycle(int* a, int* b, int* c);
// TODO: declare the signature for the swapCycle function.

int main(void)
{
    int x = 1;
    int y = 2;
    int z = 3;

    printf("Before swap:\n");
    printf("x is %i \ny is %i \nz is %i\n", x, y, z);

    printf("Swapping...\n");

    swapCycle(&x, &y, &z);// TODO: call the swapCycle function

    printf("After swap:\n");
    printf("x is %i \ny is %i \nz is %i\n", x, y, z);
    
    swapCycle(&x, &y, &z);// TODO: call the swapCycle function

    printf("After swap:\n");
    printf("x is %i \ny is %i \nz is %i\n", x, y, z);
    
    swapCycle(&x, &y, &z);// TODO: call the swapCycle function

    printf("After swap:\n");
    printf("x is %i \ny is %i \nz is %i\n", x, y, z);
    
    swapCycle(&x, &y, &z);// TODO: call the swapCycle function

    printf("After swap:\n");
    printf("x is %i \ny is %i \nz is %i\n", x, y, z);
}

// TODO: implement the swapCycle function

void swapCycle(int* a, int* b, int* c)
{
    int temp = *a;
    *a = *b;;
    *b = *c;
    *c = temp;
}