#include "monty.h"

/**
* pall - print all elements of the stack
* @stack: stack
* @line_number: line number
* Return: void
*/
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack; // current pointer to stack

	(void)line_number;

	while (current != NULL) // while current is not null print all elements
	{
		printf("%d\n", current->n); // print the number
		current = current->next; // move to next element
	}
}
