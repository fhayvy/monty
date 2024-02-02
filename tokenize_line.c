#include "monty.h"

/**
 * tokenize_line - Tokenize line read from file
 */
void tokenize_line(void)
{
	int num = 0;
	char *delims = " \n", *token = NULL, *linecpy = NULL;
	linecpy = malloc(sizeof(char) * (strlen(argument->line) + 1));
	strcpy(linecpy, argument->line);
	argument->n_token = 0;
	token = strtok(linecpy, delims);
	while (token)
	{
		argument->n_token += 1;
		token = strtok(NULL, delims);
	}

	argument->tokens = malloc(sizeof(char *) * (argument->n_token + 1));
	strcpy(linecpy, argument->line);
	token = strtok(linecpy, delims);
	while (token)
	{
		argument->tokens[num] = malloc(sizeof(char) * (strlen(token) + 1));
		if (argument->tokens[num] == NULL)
			malloc_fail();
		strcpy(argument->tokens[num], token);
		token = strtok(NULL, delims);
		num++;
	}
	argument->tokens[num] = NULL;
	free(linecpy);
}
