#include "monty.h"

/**
 * 
 * 
*/

void initializeArguments()
{
    arguments = malloc(sizeof(argT));
    if (arguments == NULL)
        mallocFailed();
    arguments->stream = NULL;
    arguments->line = NULL;
}