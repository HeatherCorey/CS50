#include <cs50.h>
#include <stdio.h>
#include <unistd.h>

int main(void)
{
    printf("You are the Launch Director, and you are standing in the Launch Control Center.\n\
    The Test Director turns to you and is waiting for your orders.\n\
    You speak into the microphone: 'We are go for launch!'\n\
    You must give the Launch Control Center a number to start the countdown.\n");
    
    int n;
    do
    {
        printf("\tPlease enter a positive integer: ");
        n = GetInt();
        if (n<=0)
        {
            printf("Test Director: 'With all due respect, this is no time for joking around!'\n");
        }
    }
    while (n <= 0);
    for (int x = n; x > 0; x--)
    {
        printf("\t%i\n",x);
        sleep(1);
    }
    printf("\tLift off!!!\n");
}