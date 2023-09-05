#include "monty.h"
#include "variable.h"

/**
 * 
 * 
*/

void freeArguments()
{
    if (arguments != NULL) {
        if (arguments->line != NULL) {
            free(arguments->line);
            arguments->line = NULL;
        }
        if (arguments->stream != NULL) {
            fclose(arguments->stream);
            arguments->stream = NULL;
        }
        free(arguments);
        arguments = NULL;
    }
}