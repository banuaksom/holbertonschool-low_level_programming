#include "monty.h"
/**
 * nop_opcode - does nothing when executed
 * @stack: pointer to the head
 * @line_number: line number
 * Return: void
 */
void nop_opcode(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
}
/**
 * swap_opcode - swaps the top two elements of the stack
 * @stack: pointer to the head
 * @line_number: line number
 * Return: nothing
 */
void swap_opcode(stack_t **stack, unsigned int line_number)
{
	stack_t *cur = *stack;
	stack_t *new_node;
	int tmp;

	if (!(*stack))
	{
		dprintf(STDERR_FILENO, "L%u: can't swap, stack too short\n",
				line_number);
		fclose(global.file);
		exit(EXIT_FAILURE);
	}

	if (cur && cur->next)
	{
		new_node = cur->next;
		tmp = cur->n;
		cur->n = new_node->n;
		new_node->n = tmp;
	}
	else
	{
		dprintf(STDERR_FILENO, "L%u: can't swap, stack too short\n",
				line_number);
		fclose(global.file);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
}
