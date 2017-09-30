#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float owed;
    int cents = 0;
    int coins = 0;
   
   do
    {
        printf("How much change is owed? ");
        owed = GetFloat();
    }
    while(owed < 0);
    
    owed = owed * 100;
    cents = round(owed);
    
    while(cents - 25 > - 1)
    {
        cents = cents - 25;
        coins++;
    }

    while(cents - 10 > -1)
    {
        cents = cents - 10;
        coins++;
    }
    
    while(cents - 5 > -1)
    {
        cents = cents - 5;
        coins++;
    }
    
    while(cents - 1 > -1)
    {
        cents = cents - 1;
        coins++;
    }
    
    printf("%i\n",coins);
}