#include <cs50.h>
#include <stdio.h>
#include <string.h>

string promptAndValidate(string fieldname);

int main(void)
{
    printf("Hello, thank you for signing up for: The United States\n");
    printf("I'll need to get some info from you please...\n\n");

    // TODO replace lines 14 - 44 with something much nicer
    
    string firstname = promptAndValidate("Please enter your first name");
    string lastname = promptAndValidate("Please enter your last name");
    string state = promptAndValidate("Please enter your state");
    string email = promptAndValidate("Please enter your email address");

    printf("\nGreat thanks, lemme just enter that into my system here...\n");
    printf("%s %s from %s, at %s\n", firstname, lastname, state, email);
    printf("Excellent! Please pay your taxes in April, or you'll be hearing from us (check your spam folder).\n");
}

string promptAndValidate(string fieldname)
{
    string answer = "";    //empty string
    int minimumlength = 2;
    while( strlen(answer) < minimumlength ) 
    {
        printf("%s (must be at least %i characters long):\n", fieldname, minimumlength);   //only thing that changes is fieldname
        answer = GetString();
    }  
    return answer;  //becomes output
}