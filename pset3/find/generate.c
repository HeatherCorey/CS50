/**
 * generate.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Generates pseudorandom numbers in [0,LIMIT), one per line.
 *
 * Usage: generate n [s]
 *
 * where n is number of pseudorandom numbers to print
 * and s is an optional seed
 */
 
#define _XOPEN_SOURCE

#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// constant
#define LIMIT 65536

int main(int argc, string argv[])
{
    // command line arguments must be exactly two or three.
    if (argc != 2 && argc != 3)
    {
        printf("Usage: generate n [s]\n");
        return 1;
    }

    // TODO: convert to int and store the value of argument 1
    int n = atoi(argv[1]);

    // TODO: if third arg (seed) is used, generate a pseudo random number
        // based on int value of argument 2
    if (argc == 3)
    {
        srand48((long int) atoi(argv[2]));
    }
    else   //otherwise, generate a pseudo random code based on the time
    {
        srand48((long int) time(NULL));  
    }

    // 
    for (int i = 0; i < n; i++)
    {
        printf("%i\n", (int) (drand48() * LIMIT));  
        //print each digit of n
    }

    // success 
    return 0;
}