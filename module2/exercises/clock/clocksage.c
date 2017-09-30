#include <cs50.h>
#include <stdio.h>
//7 + 12 == 7

//5%12

//7 + 25 = 7 + (24) + 1 == 8

int main(void)
{
    printf("Enter the current hour: ");
    int cur_hr = GetInt();
    
    printf("Jump ahead by how many hours? ");
    int fwd_hrs = GetInt();
    
    
    int fut_hr = (cur_hr + fwd_hrs)%12;
        
        if (fut_hr > 12)
        {
            fut_hr = fut_hr - 12;
        }
    
    printf("%i hours from now, it will be %i o'clock.\n",fwd_hrs,fut_hr);
    
}