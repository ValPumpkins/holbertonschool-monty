#include "monty.h"
#include "variable.h"

/**
* main - entry point
* @argc: number of arguments
* @argv: arguments
* Return: 0
*/
int main(int argc, char *argv[])
{
	char *line = NULL;
	char *opcode;
	FILE *file;
	size_t len = 0;
	unsigned int line_number = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	file = fopen(argv[1], "r");

	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while ((getline(&line, &len, file)) != -1)
	{
		line_number++;
		opcode = strtok(line, " \t\n\r");

		if (opcode != NULL && opcode[0] != '#')
			getOp(opcode, line_number, line, file);
	}
	freeArg(&stack, line, file);

	return (EXIT_SUCCESS);
}
