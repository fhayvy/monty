#define _GNU_SOURCE 
#include "monty.h"
#include <stdio.h>

arg_t *argument = NULL;
/**
 * main - Entry point 
 *
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	size_t n = 0;

	read_argc(argc);
	initialize_arguments();
	get_stream(argv[1]);

	while (getline(&argument->line, &n, argument->stream) != -1)
	{
		argument->line_number += 1;
		tokenize_line();
		get_instruction();
		run_instructiin();
		free_tokens();
	}
	close_stream();
	free_argument();
	return (0);
}
