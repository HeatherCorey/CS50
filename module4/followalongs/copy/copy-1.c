 /**
  * Filename: copy-0.c
  * Save in Folder: ~/workspace/module4/followalongs/copy
  * 
  * Include the cs50 library
  * Include the stdio library
  * Include the ctype library
  * Include the string library
  *
  * Add main method
  *    Print "Say something: " 
  *    Declare a variable called s of type string and assign the user input to it
  *    Hint: Use the function GetString() from the cs50 library.
  *
  *    If (s == NULL)
  *        return 1
  *
  *    Declare a variable called t of type string and assign the variable s to it
  *
  *    Print "Capitalizing copy...\n"
  *
  * You will find instructions to complete this task in the video. 
  * You will be modifying this code as you go along.
  *
  */
  
#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    printf("Say something: ");
    
    char *s = GetString();
    
    if (s == NULL)
        return 1;
        
    char *t = malloc((strlen(s) + 1) * sizeof(char));
    if (t == NULL)
    {
        free(s);
        return 1;
    }
    for (int i = 0, n = strlen(s); i <= n; i++)
    {
        t[i] = s[i];
    }
    
    printf("Capitalizing copy...\n");
    
        if (strlen(t) > 0)
            t[0] = toupper(t[0]);
    
    printf("Original: %s\n", s);
    printf("Copy:     %s\n", t);
    return 0;
}