#include "monty.h"
/**
 * push_opcode - pushes an element to the stack
 * @stack: a pointer to the head of a linked list
 * @line_number: line number
 * Return: void
 */
void push_opcode(stack_t **stack, unsigned int line_number)
{
	stack_t *new_node;
	(void)line_number;

	new_node = malloc(sizeof(stack_t));
	if (!new_node)
	{
		dprintf(STDERR_FILENO, "Error: malloc failed\n");
		free(global.arr_lines);
		fclose(global.file);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	new_node->n = global.line_data;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (*stack)
	{
		new_node->next = *stack;

		(*stack)->prev = new_node;
	}
	*stack = new_node;
}
/**
 * pall_opcode - prints all values on the stack from the top
 * @stack: pointer to head
 * @line_number: line number
 * Return: void
 */
void pall_opcode(stack_t **stack, unsigned int line_number)
{
	stack_t *cur = *stack;
	 (void)line_number;

	while (cur)
	{
		printf("%d\n", cur->n);
		cur = cur->next;
	}
}
/**
 * pint_opcode - prints the value at the top of the stack
 * @stack: pointer to head
 * @line_number: line number
 * Return: void
 */
void pint_opcode(stack_t **stack, unsigned int line_number)
{
	stack_t *cur = *stack;

	if (cur)
	{
		printf("%d\n", cur->n);
	}
	else
	{
		dprintf(STDERR_FILENO, "L%u: can't pint, stack empty\n",
				line_number);
		exit(EXIT_FAILURE);
	}
}
/**
 * pop_opcode - removes the top element of the stack
 * @stack: pointer to the head
 * @line_number: line number
 * Return: void
 */
void pop_opcode(stack_t **stack, unsigned int line_number)
{
	stack_t *cur = *stack;
	stack_t *tmp;

	if (!cur)
	{
		dprintf(STDERR_FILENO, "L%u: can't pop an empty stack\n",
				line_number);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	tmp = cur->next;
	free(cur);
	*stack = tmp;
	cur = *stack;
	if (cur)
	{
		cur->prev = NULL;
	}
}
/**
 * add_opcode - adds the first two nodes together
 * @stack: pointer to the head
 * @line_number: line number
 * Return: void
 */
void add_opcode(stack_t **stack, unsigned int line_number)
{
	stack_t *cur = *stack;
	stack_t *new_node;

	if (!cur || !cur->next)
	{
		dprintf(STDERR_FILENO, "L%u: can't add, stack too short\n",
				line_number);
		exit(EXIT_FAILURE);

	}
	new_node = cur->next;
	new_node->n = new_node->n + cur->n;
	pop_opcode(stack, line_number);
}
