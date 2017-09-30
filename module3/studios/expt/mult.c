#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include "mult.h"

int mult(int x, int y);
bool multCheck(int x, int y);

/*int main(void)
{
    int x = GetInt();   //
    
    int y = GetInt();
    
    bool posProduct = multCheck(x, y);
    
    if (posProduct == false)
        printf("%i * %i = %i\n", x, y, -mult(x, y));
    else
        printf("%i * %i = %i\n", x, y, mult(x, y));

   // printf("2 * 2 = %i\n", mult(2, 2),product);
   // printf("3 * 9 = %i\n", mult(3, 9), product);
    //printf("-3 * 9 = %i\n", mult(-3, 9), product);
    //printf("3 * -9 = %i\n", mult(3, 9), product);
   // printf("-3 * -9 = %i\n", mult(-3, -9), product);
   
   return 0;
}
*/
bool multCheck(int x, int y)
{
    if (x < 0 && y < 0)
        return true;
    else if (x > 0 && y > 0)
        return true; 
    else
        return false;
}


int mult(int x, int y)
{
    if(y == 1)
    {
        int product = abs(x);
        return product;
    }
    
    else
    {
        x = abs(x);
        y = abs(y);
        int product = x + mult(x,--y);  //(x + x ) y times
        return product;
    }
}

