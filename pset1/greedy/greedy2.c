#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float owed;
    int cents = 0;
    int coins = 0;
    int quarters = 0;
    int dimes = 0;
    int nickels = 0;
    int pennies = 0;
   
   do
    {
        printf("How much change is owed? ");
        owed = GetFloat();
    }
    while(owed < 0);
    
    owed = owed * 100;
    cents = round(owed);
    
    while((cents - 25) > 0)
    {
        cents = cents - 25;
        coins++;
        quarters++;
    }

    while(cents - 10 > 0)
    {
        cents = cents - 10;
        coins++;
        dimes++;
    }
    
    while(cents - 5 > 0)
    {
        cents = cents - 5;
        coins++;
        dimes++;
    }
    
    while(cents > 0)
    {
        cents = cents - 1;
        coins++;
        pennies++;
    }
    
    printf("You will give the customer %i coins: %i quarters, \
%i dimes, %i nickels, and %i pennies.\n",coins,quarters,dimes,nickels,pennies);
}