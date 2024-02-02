#include "monty.h"

/**
 * close_stream - close the file stream
 */
void close_stream(void)
{
	if (argument->stream == NULL)
		return;

	fclose(argument->stream);
	argument->stream = NULL;
}
