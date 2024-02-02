#include "monty.h"

/**
 * free_tokens - free the allocated memory for token
 */
void free_tokens(void)
{
	int l = 0;

	if (argument->tokens == NULL)
		return;

	while (argument->tokens[l])
	{
		free(argument->tokens[l]);
		l++;
	}
	free(argument->tokens);
	argument->tokens = NULL;
			
}
