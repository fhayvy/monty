#include "monty.h"

/**
 * get_instruction - instruction based on the first token in the file
 */
void get_instruction(void)
{
	int k = 0;
	instruction_t instruction[] = {
		{"push", &push}, {"pop", &pop},
		{"pint", &pint}, {"swap", &swap},
		{"nop", &nop}, {"add", &add},
		{"pall", &pall}, {"sub", &sub},
		{"mod", &mod}, {"pchar", &pchar},
		{"pstr", &pstr}, {"queue", &queue},
		{"stack", &stack}, {"rotr", &rotr},
		{"rotl", &rotl}, {"mul", &mul},
		{"div", &_div},
		{NULL, NULL}
	};
	
	if (argument->n_token == 0)
		return;

	for (k = 0; instruction[k].opcode != NULL; k++)
	{
		if (strcmp(instruction[k].opcode, argument->tokens[0]) == 0)
		{
			argument->instruction->opcode = instruction[k].opcode;
			argument->instruction->f = instruction[k].f;
			return;
		}
	}
	invalid_instruction();
}
