#include "monty.h"

/**
 * free_stack - free the node in the stack list
 * @head: the node
 */
void free_stack(stack_t *head)
{
	if (head == NULL)
		return;

	if (head->next != NULL)
	{
		free_stack(head->next);
	}
	free(head);
}
