#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>


/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;


/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct arg_s - hold numbers of variable
 * @stream: stream from FILE
 * @line: line of text from FILE
 */
typedef struct arg_s
{
	FILE *stream;
	char *line;
	unsigned int line_number;
	char **tokens;
	int n_token;
	instruction_t *instruction;
} arg_t;

extern arg_t *argument;



void read_argc(int argc);
void initialize_arguments();
void malloc_fail();
void get_stream(char *filename);
void getstream_fail(char *filename);
void free_argument();
void free_head(void);
void free_stack(stack_t *head);
void tokenize_line(void);
void get_instruction(void);
void invalid_instruction(void);
void free_tokens(void);
void close_stream(void);








#endif
