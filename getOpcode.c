#include "monty.h"

stack_t *stack = NULL;

/**
* getOp - checks opcode and calls corresponding function
* @opcode: opcode to check
* @line_number: line number
* @line: line
* @file: file
*/
void getOp(char *opcode, unsigned int line_number, char *line, FILE *file)
{
	instruction_t instruction[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"nop", nop},
		{"sub", sub},
		{"div", division},
		{NULL, NULL}
	};

	size_t index;
	int found = 0;

	for (index = 0; instruction[index].opcode != NULL; index++)
	{
		if (strcmp(opcode, instruction[index].opcode) == 0)
		{
			instruction[index].f(&stack, line_number);
			found = 1;
			break;
		}
	}
	if (!found)
	{
		fprintf(stderr, "L%u: unknown instruction %s\n", line_number, opcode);
		freeArg(&stack, line, file);
		exit(EXIT_FAILURE);
	}

}
