#include "monty.h"

/**
 * delete_stack_node - Deletes node at the head/top
 * Return: void
 */

void delete_stack_node(void)
{
	stack_t *tmp;

	tmp = arguments->head;
	arguments->head = tmp->next;
	free(tmp);
}
