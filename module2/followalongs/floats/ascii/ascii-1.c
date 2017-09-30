/**
  * This is a continuation of the last program and you should copy ascii-0.c file so you do not have to 
  * write the whole program. Use the command below, open up ascii-1.c and watch the video
  * to complete the task.  
  * Make sure you are in this Folder: ~/workspace/module2/followalongs/ascii
  *
  *      cp ascii-0.c ascii-1.c
  *
  */
  
#include <stdio.h>
  
int main(void)
{
    for (char c = 'A'; c <= 'Z'; c++)
    {
        printf("%i is %c\n", (int) c, c);
    }
}