/**
  * Filename: wordgrid.c
  * Save in Folder: ~/workspace/module3/studios/wordgrid
  * 
  * Recall that you can represent multi-dimensional data with nested arrays. 
  * For example, you can represent a grid of things as an array of (arrays of things).
  * In fact, an array of strings is one such example; since a string is actually just an array of chars, 
  * an array of strings is an array of (arrays of chars).
  * Let's explore this by writing a program that receives three 3-character strings (in other words a grid of 9 chars),
  * and prints the grid to the console, with each word in its own column, like so:
  * 
  * Example:
  * $ ./wordgrid sun yes ear
  * sye
  * uea
  * nsr
  * 
  * Notice how each word is written downwards, rather than across.
  * 
  * First you'll want to perform some validation:
  * Make sure the user provided exactly 3 additional command-line arguments 
  * (in addition to the name of the program itself).
  * Make sure each of those arguments is exactly 3 characters-long. (Use strlen())
  * After validating, you can go about printing the grid.
  * 
  * Note that you can access the elements of a nested array using multiple brackets, i.e. [][]. 
  * For example, if words looks like:
  * 
  * [ "sun", "yes", "ear" ]
  * , then:
  *
  * words[0][0] evaluates to "sun"[0] which evaluates to 's'
  * words[2][1] evaluates to "ear"[1] which evaluates to 'a'
  *
  */
  
  #include <cs50.h>
  #include <stdio.h>
  #include <string.h>
  
  void printgrid(argc, argv, dimension);
  bool validate(int argc, char* argv[], int dimension);
  
  int main(int argc, string argv[])
  {
    if(!validate(argc, argv, dimension))
    {
      return 1;
    }
    
    printgrid(argc, argv, dimension)  
      
      for(int i = 0; i < strlen(argv[1]); i++)  // argv[1st word etc]        //for each letter
      {
          for(int j = 1; j < argc; j++)  //  [jth] letter of argv[i]    //in each word
          {
              printf("%c", argv[j][i]);
          }
          printf("\n"); 
      }
      return 0;
  }
  
bool validate(int argc, char* argv[], int dimension)
{
  for (int a = 1; a < argc; a++)
      {
          int dimension = argc - 1;
          if(strlen(argv[a]) != dimension)
          {
            printf("Usage: Please enter the program name plus
            return false;
          }
      }
      return true;
}

void printgrid(argc, argv, dimension)
{
   for(int i = 0; i < strlen(argv[1]); i++)  // argv[1st word etc]        //for each letter
      {
          for(int j = 1; j < argc; j++)  //  [jth] letter of argv[i]    //in each word
          {
              printf("%c", argv[j][i]);
          }
          printf("\n"); 
      }
}