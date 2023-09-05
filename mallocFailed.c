#include "monty.h"

/**
 * 
 * 
*/

void mallocFailed(void)
{
    dprintf(2, "Error: malloc failed\n");
    freeArguments();
    exit(EXIT_FAILURE);
}