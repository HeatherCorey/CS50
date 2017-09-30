#include <stdio.h>
#include <cs50.h>

int input;
int main(void)
printf("                      ##");
printf("                     ###")
printf("                    ####")
printf("                   #####")
printf("                  ######")
printf("                 #######")
printf("                ########")
printf("               #########")
printf("              ##########")
printf("             ###########")
printf("            ############")
printf("           #############")
printf("          ##############")
printf("         ###############")
printf("        ################")
printf("       #################")
printf("      ##################")
printf("     ###################")
printf("    ####################")
printf("   #####################")
printf("  ######################")
printf(" #######################")
printf("########################")

{
    do
    {
        printf("Please enter a positive integer between 1 and 23: ");
        input = GetInt();
    }
    while (input<1 || input>23);
    
    //functioning above
    
    if (input >0)
    {
        printf("                      ##\n");
    }
    if (input >1)
    {
        printf("                     ###\n");
    }
    if (input >2)
    {
        printf("                    ####\n");
        //functioning above
    }
}