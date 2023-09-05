#include "monty.h"

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
	size_t line_number = 0, len = 0;
	stack_t *stack = NULL;

	if (argc != 2) // check if file was passed
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	file = fopen(argv[1], "r"); // open file for reading

	if (file == NULL) // check if file was opened successfully
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while ((getline(&line, &len, file)) != -1) // getline returns -1 on EOF or error
	{
		line_number++;
		opcode = strtok(line, " \t\n\r"); // tokenize line into opcode

		if (opcode && opcode[0] != '#') // ignore empty lines and comments
			getOp(opcode, &stack, line_number); // call getOp function to execute opcode
	}
	freeStack(&stack); // free stack memory
	free(line);
	fclose(file); // close file

	return (0);
}
