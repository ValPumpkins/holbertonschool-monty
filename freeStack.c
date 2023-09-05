#include "monty.h"

/**
 * freeStack - Frees the memory used by the stack.
 * @stack: Pointer to the top of the stack.
 */
void freeStack(stack_t **stack)
{
	stack_t *current = *stack, *temp; // current = pointer to top of stack

	while (current) // while current is not null
	{
		temp = current;
		current = current->next; // move to next node
		free(temp);
	}
	*stack = NULL; // set stack to null
}
