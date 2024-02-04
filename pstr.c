#include "monty.h"

/**
 * pstr - the modulus if the number
 * @stack: pointer to the stack
 * @line_number: line of the division number
 */
void pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *tem2;

	(void) stack;
	(void) line_number;

	tem2 = argument->head;
	while (tem2 != NULL)
	{
		if (tem2->n <= 0 || tem2->n > 127)
			break;
		printf("%c", tem2->n);
		tem2 = tem2->next;
	}
	printf("\n");
}
