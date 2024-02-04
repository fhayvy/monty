#include "monty.h"

/**
 * rotr - the modulus if the number
 * @stack: pointer to the stack
 * @line_number: line of the division number
 */
void _div(stack_t **stack, unsigned int line_number)
{
	stack_t *tem,*last;

	(void) stack;
	(void) line_number;

	if (argument->stack_length < 2)
		return;

	tem = argument->head;
	while (tem)
	{
		if (tem->next == NULL)
		{
			last = tem;
			break;
		}
		tem = tem->next;
	}
	last->prev->next = NULL;
	last->next = argument->head;
	last->prev = NULL;

	argument->head = last;
}
