#include "monty.h"

/**
 * div - divide number
 * @stack: pointer to the stack
 * @line_number: line of the division number
 */
void _div(stack_t **stack, unsigned int line_number)
{
	stack_t *tem1, *tem2;

	(void) stack;
	if(argument->stack_length < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
		free_all_args();
		exit(EXIT_FAILURE);
	}

	tem1 = argument->head;
	tem2 = tem1->next;

	if (tem1->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		free_all_args();
		exit(EXIT_FAILURE);
	}
	tem2->n = tem2->n / tem1->n;
	delete_stack_node();

	argument->stack_length -= 1;
}
