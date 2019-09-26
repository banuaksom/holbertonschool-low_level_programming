#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <unistd.h>
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
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
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
/**
  * struct arguments - global variables
  * @file: .m file to read
  * @line: command from a line
  * @arr_lines: array of lines holdin commands
  * @len: length of a line
  * @read_lines: variable for getline
  * @line_data: number after push
  * Description: list of variables to use in any code
  */
typedef struct arguments
{
	FILE *file;
	char *line;
	char *arr_lines;
	size_t len;
	ssize_t read_lines;
	int line_data;
} glo_var;
extern glo_var global;

void getline_fail(ssize_t read_lines);
void open_fail(char *argv[]);
void argc_fail(int argc);
void int_error(stack_t *head, unsigned int i);
char *_trim(char *line);
char *tokenize(stack_t *head, unsigned int i);
void free_stack(stack_t *head);
int get_function(stack_t **stack, unsigned int line_number);
void push_opcode(stack_t **stack, unsigned int line_number);
void pall_opcode(stack_t **stack, unsigned int line_number);
void pint_opcode(stack_t **stack, unsigned int line_number);
void pop_opcode(stack_t **stack, unsigned int line_number);
void add_opcode(stack_t **stack, unsigned int line_number);
void nop_opcode(stack_t **stack, unsigned int line_number);
void swap_opcode(stack_t **stack, unsigned int line_number);
#endif
