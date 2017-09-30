 /**
  * Filename: pointers.c
  * Save in Folder: ~/workspace/module4/followalongs/pointers
  * 
  * Include the cs50 library
  * Include the stdio library
  * Include the string library
  *
  * Add main method
  *
  *    Declare a pointer called s of type char and assign the user input to it
  *    Hint: <type>* <variable name> = GetString();
  *    If (s == NULL)
  *        return 1;
  *
  * 
  * You will find instructions to complete this task in the video. 
  * You will be modifying this code as you go along.
  *
  */

#include <cs50.h>  
#include <stdio.h>
#include <string.h>

int main(void)
{
    char* input = GetString();
    if (input == NULL)
        return 1;
        
    for(int i = 0, n = strlen(input); i < n; i++)
    {
        printf("%c\n", *(input + i));
    }
}