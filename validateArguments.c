#include "monty.h"
#include "variable.h"

/**
 * 
 * 
*/

void validateArguments(int argc)
{
    if (argc == 2)
        return;
    
    dprintf(2, "USAGE: monty file\n");
    exit(EXIT_FAILURE);
}