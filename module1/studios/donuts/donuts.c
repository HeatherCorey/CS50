/**
  * Filename: donuts.c
  * Save in Folder: ~/workspace/module1/studios/donuts
  * 
  * Write a program which greets the user, introduces the flavor of the day, and 
  * takes the user's order . 
  * 
  * Taking their order involves asking two questions: 
  * "How many donuts?" and "How much do you want to pay?"
  * Finally, inform the user of the total cost of their order. 
  * Don't forget to include sales-tax, which is, let's say, 5%.
  * 
  * Example:
  *      $ ./donuts
  *      Welcome to the Loop Hole!
  *      Today's Manager's Special is:
  *      Crunch Jelly: A traditional jelly donut in which the jelly filling is made entirely of Capn' Crunch Berries (Just Berries)
  *      How many would you like? 3.33333
  *      How much would you like to pay per donut (suggested price is $4.35 each)? 2.5
  *      Ok, let me prepare that for you....
  *      After tax, your total is: $8.74999125 
  *      Thank you for snacking! Loop back around here soon!
  * 
  * Remember, don't worry about rounding and your result may have a slightly
  * different number of decimal places than the example program due to imprecision.
  *
  */
  
  #include <stdio.h>
  #include <cs50.h>
  
  int main(void)
  {
      printf("Welcome to the Loop Hole!\n\
      Today's Manager's Special is:\n\
      Crunch Jelly: A traditional jelly donut in which the jelly filling is made entirely of Capn' Crunch Berries (Just Berries)\n\
      How many would you like?");
      float number = GetFloat();
      
      printf("How much would you like to pay per donut? The suggested price is $4.35 each. ");
      float price = GetFloat();
      
      printf("Allow me to prepare your order... \n\
      After tax, your total is: %f\n",(number*price)+(number*price*.05));
      
      printf("Thanks for snacking! Loop back around here soon!\n");
  }