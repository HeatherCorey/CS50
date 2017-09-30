#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include "cat.h"

void meow(CAT kitty);
void meow2(CAT* kitty);

int main(void)
{
    CAT franklin = {"franklin", 9, 9, "orange"};
    CAT* sally = malloc(sizeof(CAT));
    
    //set properties for sally
    
    sally->name = "sally";
    sally->age = 2;
    sally->lives = 9;
    sally->color= "brown";
    
    meow(franklin);
    meow(*sally);  //follows the address (deference)
    
    meow2(&franklin);  //function wants address but franklin is the actual thing
    meow2(sally);
    
    free(sally);
}

void meow(CAT kitty)  //pass by value
{
    printf("%s says ROWWWORR\n", kitty.name);   //have copy of cat
}

void meow2(CAT* kitty)   //pass by reference
{
   printf("%s says mew\n", kitty->name);    //have copy of cat
}