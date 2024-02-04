#include "monty.h"

/**
 * push - Pushes an integer onto the stack
 * @stack: Pointer to the stack
 * @line_number: Line number where the push function is called
 */

void push(stack_t **stack, unsigned int line_number)
{
	if (argument->n_token <= 1 || !(is_number(argument->tokens[1])))
	{
		free_argument();
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	*stack = malloc(sizeof(stack_t));
	if (*stack == NULL)
		malloc_fail();
	(*stack)->next = (*stack)->prev = NULL;
	(*stack)->n = (int) atoi(argument->tokens[1]);

	if (argument->head != NULL)
		argument->head = *stack;
	else
	{
		if (argument->stack)
		{
			(*stack)->next = argument->head;
			argument->head->prev = *stack;
			argument->head = *stack;
		}
		else
		{
			stack_t *tem = argument->head;

			while (tem->next)
				tem = tem->next;
			tem->next = *stack;
			(*stack)->prev = tem;
		}

	}
	argument->stack_length += 1;
}
