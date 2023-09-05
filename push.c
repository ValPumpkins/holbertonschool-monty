#include "monty.h"

/**
* push - push an element to the stack
* @stack: stack
* @line_number: line number
* Return: void
*/
void push(stack_t **stack, unsigned int line_number)
{
	int num;
	char *token, *extraArg;
	stack_t *newNode;

	token = strtok(NULL, " \t\n\r"); // get the number from the line of code
	extraArg = strtok(NULL, " \t\n\r");

	if (extraarg != NULL)
	{
		fprintf("L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}

	if (token == NULL) // if there is no number
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}

	num = atoi(token); // convert the number to an integer

	if (num == 0 && token[0] != '0') // if the number is not an integer
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}

	newNode = malloc(sizeof(stack_t)); // allocate memory for the new node

	if (newNode == NULL) // if malloc fails
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	newNode->n = num; // set the new node's value
	newNode->prev = NULL; // set the new node's previous value

	if (*stack) // if the stack is not empty
	{
		newNode->next = *stack; // set the new node's next value
		(*stack)->prev = newNode; // set the previous node's next value
	}
	else // if the stack is empty
		newNode->next = NULL; // set the new node's next value

	*stack = newNode; // set the stack to the new node
}
