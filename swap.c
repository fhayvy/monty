#include "monty.h"

/**
 * swap - Swaps the top two elements of the stack
 * @stack: Pointer to the stack
 * @line_number: Line number where the swap function is called
 */

void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp1, *tmp2;

	(void) stack;

	if (argument->stack_length < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		free_all_args();
		exit(EXIT_FAILURE);
	}

	tmp1 = argument->head;
	tmp2 = tmp1->next;
	tmp1->next = tmp2->next;
	if (tmp1->next)
		tmp1->next->prev = tmp1;
	tmp2->next = tmp1;
	tmp1->prev = tmp2;
	tmp2->prev = NULL;
	argument->head = tmp2;
}
