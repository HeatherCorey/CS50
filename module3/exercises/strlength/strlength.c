#include <cs50.h>
#include <string.h>
#include <stdio.h>

int strlength(string);

int main(void)
{
    printf("%d\n",strlength("hello"));
    printf("%d\n",strlength("goodbye"));
}

int strlength(string s)
{
    int count = 0; 
    while(s[count] != '\0')
    {
        count++;
    }

    return count;
}