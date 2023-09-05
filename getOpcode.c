#include "monty.h"

/**
* getOp - checks opcode and calls corresponding function
* @opcode: opcode to check
* @stack: pointer to stack
* @line_number: line number
* Return: void
*/
void getOp(const char *opcode, stack_t **stack, unsigned int line_number)
{
	instruction_t instruction[] = { // array of structs for opcode and function
		{"push", push},
		{"pall", pall},
		{NULL, NULL}
	};

	int i;
	int found = 0;

	for (i = 0; instruction[i].opcode; i++) // iterate through array
	{
		if (strcmp(opcode, instruction[i].opcode) == 0) // compare opcode to struct
		{
			instruction[i].f(stack, line_number); // call function
			found = 1; // set found to 1
			break;
		}
	}
	if (found == 0) // if not found
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", line_number, opcode);
		exit(EXIT_FAILURE);
	}

}
