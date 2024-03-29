#include "monty.h"

/**
 * pint - Prints the value at the top of a stack
 * @stack: Pointer to the stack
 * @line_number: Line number where the pint function is called
 */

void pint(stack_t **stack, unsigned int line_number)
{
	(void) stack;
	if (argument->head == NULL)
	{
		fprintf(stderr, "L%d: can't pint:, stack empty\n", line_number);
		free_all_args();
		exit(EXIT_FAILURE);
	}
	printf("%d\n", argument->head->n);
}
