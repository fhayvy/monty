#include "monty.h"

/**
 * malloc_fail - handle malloc failure
 */
void malloc_fail()
{
	fprintf(stderr, "USAGE: monty file\n");
	free_argument();
	exit(EXIT_FAILURE);
}
