#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include "mult.h"

int expt(int x, int y, int z);
int posExpo (int z);
//TODO: Write a recursive function that computes exponents.
//This function will rely upon your multiplication function, so you should do that first!


int main(void) 
{
    int x = GetInt();
    int y = x;
    int z = posExpo(GetInt());
        
    bool posProduct = multCheck(x, z);
    
    if (posProduct == false)
        printf("%i^%i = -%i\n", x, z, expt(x, y, z));
    else
        printf("%i^%i = %i\n", x, z, expt(x, y, z));
        
    //Test multiplication:
    //printf("2 * 2 = %i\n", mult(2, 2));
    //printf("3 * 9 = %i\n", mult(3, 9));
   // printf("-3 * 9 = %i\n", mult(-3, 9));
    //printf("3 * -9 = %i\n", mult(3, -9));
    //printf("-3 * -9 = %i\n", mult(-3, -9));

    //Test exponentiation:
    //printf("2^8 = %i\n", expt(2, 8)); //should be 256
   // printf("2^3 = %i\n", expt(2, 3)); //should be 8
   // printf("(-2)^3 = %i\n", expt(-2, 3)); //should be -8
}

int posExpo (int z)
{
    if (z < 0)
    {
        printf("Positive exponent only :");
        int z = posExpo(GetInt());
        return z;
    }
    else
        return z;
}

int expt(int x, int y, int z) 
{
    if(y == 1)
    {
        int expo = abs(x);
        return expo;
    }
    
    else
    {
        x = abs(x);
        int expo = mult(x,expt(x,y-1,z));
        return expo;
    }
}