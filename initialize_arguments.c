#include "monty.h"

/**
 * initialize_arguments - allocate memory to the argument
 */
void initialize_arguments()
{
	argument = malloc(sizeof(arg_t));
	if (argument == NULL)
		malloc_fail();

	argument->instruction = malloc(sizeof(instruction_t));
	if (argument->instruction == NULL)
		malloc_fail();

	argument->stream = NULL;
	argument->head = NULL;
	argument->line = NULL;
	argument->n_token = 0;
	argument->line_number = 0;
	argument->stack_length = 0;
	argument->stack = 1;
}
