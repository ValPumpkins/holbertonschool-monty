#include "monty.h"

/**
 * 
 * 
*/

void gettingStreamFailed(char *fileName)
{
    fprintf(stderr, "Error: Can't open file %s\n", fileName);
    freeArguments();
    exit(EXIT_FAILURE);
}

/**
 * 
 * 
*/

void getStream(char *fileName)
{
    int fileDirectory;

    fileDirectory = open(fileName, O_RDONLY);
    if (fileDirectory == -1)
        gettingStreamFailed(fileName);
    
    arguments->stream = fdopen(fileDirectory, "r");

    if (arguments->stream == NULL)
    {
        close(fileDirectory);
        gettingStreamFailed(fileName);
    }
}