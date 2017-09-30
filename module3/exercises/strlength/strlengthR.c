#include <cs50.h>
#include <string.h>
#include <stdio.h>

int strlengthR(string);
int strlengthR2(string s, int count);

int main(void)
{
    printf("%d\n",strlengthR("hello"));
    printf("%d\n",strlengthR("goodbye"));
}

int strlengthR(string s)  //only needs to happen one time: helper function
{
    return strlengthR2(s,0);
}

int strlengthR2(string s, int count)  //to do recursive stuff
{
    if(s[count] == '\0')
    {
        return count;
    }
    else
    {
        return strlengthR2(s, count + 1);
    }
    
    return count;
}