#include <stdio.h>
#include <cs50.h>

void printMessage(string sender, string recipient, string message);

/**
 * Prints a personalized message to the console.
 */
int main(void)
{
  printf("Name of sender: ");
  string sender = GetString();

  printf("Name of recipient: ");
  string recipient = GetString();

  printf("Message: ");
  string message = GetString();

  printMessage(sender, recipient, message);
  return 0;
}

void printMessage(string sender, string recipient, string message)
{
    printf("\nDear %s,\n\n%s\n\nSincerely,\n%s\n\n", recipient, message, sender);
}

// TODO create a function called printMessage