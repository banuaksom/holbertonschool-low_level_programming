#include "monty.h"
/**
 * int_error - prints the error message for token2
 * @head: pointer to head
 * @i: character passed
 * Return: void
 */
void int_error(stack_t *head, unsigned int i)
{
	dprintf(STDERR_FILENO, "L%u: usage: push integer\n", i);
	free(global.line);
	free(global.arr_lines);
	fclose(global.file);
	free_stack(head);
	exit(EXIT_FAILURE);
}
