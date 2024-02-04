#include "monty.h"

/**
 * pchar - print char
 * @stack: pointer to the stack
 * @line_number: line of the division number
 */
void pchar(stack_t **stack, unsigned int line_number)
{
	stack_t *tem2;

	(void) stack;
	if (argument->head == NULL)
	{
		fprintf(stderr, "L%u: can't pchar, stack empty\n", line_number);
		free_all_args();
		exit(EXIT_FAILURE);
	}

	tem2 = argument->head;

	if (tem2->n < 0 || tem2->n > 127)
	{
		fprintf(stderr, "L%u: can't pchar, value out of range\n" line_number);
		free_all_args();
		exit(EXIT_FAILURE);
	}
	printf("%c\n", tem2->n);
}
