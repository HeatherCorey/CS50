#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    printf("So, what's new in your world?\n");
    
    string response = GetString();
    
    int length = strlen(response);
    
    if (length < 20)
    {
        printf("Come on, use your words like a big boy clone!\n");
    }
    else if (length > 50)
    {
        printf("Damn, I didn't ask for a recitation of War and Peace!\n");
    }
    else
    {
        printf("Neat! Nothing much new around here.\n");
    }
}