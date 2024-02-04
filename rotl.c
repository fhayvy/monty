#include "monty.h"

/**
 * rotl - the modulus if the number
 * @stack: pointer to the stack
 * @line_number: line of the division number
 */
void _div(stack_t **stack, unsigned int line_number)
{
	stack_t *tem1,*tem2;

	(void) stack;
	(void) line_number;

	if (argument->stack_length < 2)
		return;

	tem1 = argument->head;
	tem2 = tem1->next;
	argument->head = tem2;
	while (tem2)
	{
		if (tem2->next == NULL)
		{
			tem2->next = tem1;
			tem1->next = NULL;
			tem1->prev = tem2;
			break;
		}
		tem2 = tem2->next;
	}
}
