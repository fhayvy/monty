#include "monty.h"

/**
 * read_agrc - read number of argc from the command line
 *
 * @argc: the argument count
 *
 * Return: nothing
 */
void read_argc(int argc)
{
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
}
