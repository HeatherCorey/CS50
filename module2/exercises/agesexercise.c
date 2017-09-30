#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])

{
    if(argc != 2)
    {
        printf("Please enter the number of people in the room as an argument.\n");
        return 1;
    }
    int n = atoi(argv[1]);
    if(n <= 0)
    {
        printf("Please enter an integer greater than zero.\n");
    }
    for (int i = 0; i < argc; i ++)
    {
        printf("Age of person #%i: ", i + 1);
        ages[i] = GetInt();
    }
    printf("Time passes....\n");
    for (int i = 0; i < n; i ++)
    {
        printf("A year from now, person %i will be %i years old.\n", i + 1, ages[i] + 1);
    }
}
    