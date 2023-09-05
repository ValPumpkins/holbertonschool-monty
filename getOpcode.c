#include "monty.h"



/**
* getOp - checks opcode and calls corresponding function
* @opcode: opcode to check
* @line_number: line number
* @line: line
* @file: ficher monty
* Return: void
*/
void getOp(char *opcode, unsigned int line_number, char *line, FILE *file)
{
	stack_t *stack = NULL;

	instruction_t instruction[] = {
		{"push", push},
		{"pall", pall},
		{NULL, NULL}
	};

	int index;
	int found = 0;

	for (index = 0; instruction[index].opcode; index++)
	{
		if (strcmp(opcode, instruction[index].opcode) == 0)
		{
			instruction[index].f(&stack, line_number);
			found = 1;
			break;
		}
	}
	if (found == 0)
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", line_number, opcode);
		freeArg(&stack, line, file);
		exit(EXIT_FAILURE);
	}

}
