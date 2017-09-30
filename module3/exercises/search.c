#include <cs50.h>
#include <stdio.h>

#define SIZE 8


bool search(int needle, int haystack[], int SIZE);

int main(void)
{
    int numbers[SIZE] = { 4, 8, 15, 16, 23, 42, 50, 108 };
    printf("> ");
    int n = GetInt();
    if (search(n, numbers, SIZE))
    {
        printf("YES\n");
    }
    else 
    {
        printf("NO\n");
    }
}

bool search(int n, int numbers[], int SIZE)
{
    int min = numbers[0];
    int max = numbers[7];

    while (max > min)
    {
        SIZE = SIZE / 2;
        int mid = numbers[SIZE];
        if (n == mid)
        {
            printf("%i", mid);
            return true;
        }
        if (n < mid)
        {
            max = mid - 1;
        }
        if (n > mid)
        {
            min = mid + 1;
        }
    }
    return false;
}