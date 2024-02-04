#include "monty.h"

/**
 * validate_arguments - handle malloc failure
 * @argc: argument counter
 */
void validate_arguments(int argc)
{
	if (argc == 2)
		return;

	fprintf(stderr, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
}
