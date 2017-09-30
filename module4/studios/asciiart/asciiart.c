#include <cs50.h>
#include <string.h>
#include <stdio.h>

typedef struct 
{
    int* hashLocations;
    int length;
} csvLine;

csvLine extractNumbers(char* line);

int main(void)
{
    //You need to do the following:

    //Prompt the user for an input file
    
    printf("What is the name of the file I should read from?");
    
    char *readFrom = GetString();

    //Prompt the user for an output file
    
    printf("What is the name of the file I should write to?");
    
    char *writeTo = GetString();
    //Open the file to read from
    
    FILE* read = fopen(readFrom, "r");
    
    if (read == NULL)
    {
        printf("File does not exist.\n");
        return 1;
    }

    //Open the file you're writing to
    
    FILE* write = fopen(writeTo, "w");
    
    char *curLine = malloc(sizeof(int)*100 + 1);
    csvLine retArray;
    
    //For each line being read in from the input file:
    while(fgets(curLine, 100, read) != NULL)
    {
        retArray = extractNumbers(curLine);
        int *locHashes = retArray.hashLocations;
        int numHashes = retArray.length;
        int firstSpace = 0;
        int nextSpace = *locHashes;
        int counter = 0;
        int gap;
        while (counter <= numHashes)
        {
            while(firstSpace < nextSpace)
            {
                printf(" ");
                firstSpace++;
            }
            printf("#");
            
            counter++;
        }
        
        printf("\n");
    }
       /*{
            for (int j = 0, n = &csvLine[i].hashLocations; j < n; j++) //print spaces up to hashLocations[i]
            {
                printf(" ");
            }
        printf("#");   
       }
       */
        //Pass the line into the given extractNumbers function
        //For each value in the int array returned by extractNumbers:

            //put spaces in the file until the value is reached

            //put a hash in the file

    fclose(read);
    fclose(write);
    //Close both files

    //Insert the name of the output file in the print statement below
    printf("Done! If you open up %s you should now see a cool image!\n", writeTo);
}

csvLine extractNumbers(char* line)
{
    int count = 0;
    for(int i = 0; i < strlen(line); i++)
    {
        if(line[i] == ',')  //if the ith char is a comma,
        {
            count++;  //increase count
        }
    }

    char* token;
    int* hV = malloc(sizeof(int) * (count+1));
    int i = 0;
    token = strtok(line, ",");
    hV[i] = atoi(token);
    i++;
    while ((token = strtok(NULL, ",")) != NULL)
    {
        hV[i] = atoi(token);
        i++;
    }
    csvLine result;
    result.hashLocations = hV;
    result.length = count + 1;
    return result;
} 