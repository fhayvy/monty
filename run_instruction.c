#include "monty.h"

/**
 * run_instruction - Run the instruction specified by the element.
 */
void run_instruction(void)
{
	stack_t *stack = NULL;

	if (argument->n_token == 0)
		return;

	argument->instruction->f(&stack, argument->line_number);
}
