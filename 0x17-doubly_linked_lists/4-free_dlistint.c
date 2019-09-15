#include "lists.h"
/**
 * free_dlistint - Frees a list
 * @head: pointer
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *cur;

	while (head)
	{
		cur = head;
		head = head->next;
		free(cur);
	}
}
