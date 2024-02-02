#include "monty.h"

/**
 * free_argument - free memory associated with argument
 */
void free_argument()
{
	if (argument == NULL)
		return;

	if (argument->instruction)
	{
		free(argument->instruction);
		argument->instruction = NULL;
	}

	free_head();

	if (argument->line)
	{
		free(argument->line);
		argument->line = NULL;
	}

	free(argument);
}
