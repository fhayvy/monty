#include "monty.h"

/**
 * invalid_instruction - handle instruction error
 */
void invalid_instruction(void)
{
	fprintf(stderr, "L%d: unknown instruction %s\n", argument->line_number, argument->tokens[0]);
	close_stream();
	free_tokens();
	free_argument();
	exit(EXIT_FAILURE);
}
