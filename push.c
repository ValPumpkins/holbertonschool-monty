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
	char *token;
	stack_t *newNode;

	token = strtok(NULL, " \t\n\r");

	if (token == NULL)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	num = atoi(token);
	if (num == 0 && strcmp(token, "0") != '0')
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	newNode = malloc(sizeof(stack_t));
	if (newNode == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	newNode->n = num;
	newNode->prev = NULL;
	if (*stack)
	{
		newNode->next = *stack;
		(*stack)->prev = newNode;
	}
	else
		newNode->next = NULL;
	*stack = newNode;
}
