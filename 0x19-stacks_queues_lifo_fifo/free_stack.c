#include "monty.h"
/**
 * free_stack - frees stack
 * @head: pointer to a list head
 * Return: void
 */
void free_stack(stack_t *head)
{
	stack_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
