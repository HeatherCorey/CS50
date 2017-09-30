#define _XOPEN_SOURCE 500

#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// constants
#define DIM_MIN 3
#define DIM_MAX 9
#define d 3

// board
int board[DIM_MAX][DIM_MAX];

// dimensions


// prototypes
void clear(void);
void greet(void);
void init(void);
void draw(void);
bool move(int tile);
bool won(void);

int main(void)
{
    int label = d * d;
    int count = 0;
    for (int row = 0; row < d; row++)
    {
        for (int col = 0; col < d; col++)
        {
            count++;
            board[row][col] = label - count;
            printf("%i   ",board[row][col]);
        }
        printf("\n");
    }
}