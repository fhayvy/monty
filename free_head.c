#include "monty.h"

/**
 * free_head - free the head and set it to NULL
 */
void free_head(void)
{
	if (argument->head)
		free_stack(argument->head);

	argument->head = NULL;
}
