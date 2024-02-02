#include "monty.h"
#include <stdio.h>

/**
 * getstream_fail - handle error if it failed to read stream
 * @filename: file to read the stream from
 */
void getstream_fail(char *filename)
{
	fprintf(stderr, "Error: can't open file %s\n", filename);
	free_argument();
	exit(EXIT_FAILURE);
}

void get_stream(char *filename)
{
	int fd;

	fd = open(filename, O_RDONLY);
	if (fd  == -1)
		getstream_fail(filename);

	argument->stream = fopen(filename, "r");
	if (argument->stream == NULL)
	{
		close(fd);
		getstream_fail(filename);
	}
}
