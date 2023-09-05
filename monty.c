#include "monty.h"
#include "variable.h"

argT *arguments = NULL;

int main(int argc, char **argv)
{
	size_t n = 0;

	validateArguments(argc);
	initializeArguments();
	getStream(argv[1]);

	while (getline(&arguments->line, &n, arguments->stream) != -1)
	{
		/**printf("%s\n", arguments->line);*/
		arguments->line_number += 1;
		
	}

	return (0);
}