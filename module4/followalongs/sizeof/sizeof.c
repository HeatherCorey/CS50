 /**
  * Filename: sizeof.c
  * Save in Folder: ~/workspace/module4/followalongs/sizeof
  * 
  * Include the stdio library
  *
  * Add main method
  *
  *    Declare a variable called c of type char 
  *    Declare a variable called d of type double 
  *    Declare a variable called f of type float 
  *    Declare a variable called i of type int 
  * 
  * You will find instructions to complete this task in the video. 
  * You will be modifying this code as you go along.
  *
  */

#include <stdio.h>

int main(void)
{
    char c;
    double d;
    float f;
    int i;
    
    printf("char: %li\n",sizeof(c));
    printf("double: %li\n", sizeof(d));
    printf("float: %li\n",sizeof(f));
    printf("int: %li\n",sizeof(i));
}

