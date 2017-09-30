#include <stdio.h>
#include <cs50.h>

int main(void)
{
    long a = 0;
    long b = 1;
    
    printf("%li\n",a);
    printf("%li\n",b);
    
    for(int i = 0; i < 48; i++)
    {
        long c = a + b;
        printf("%li\n",c);
        a = b;
        b = c;
    }
}