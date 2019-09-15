#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a linked list
 * @head: pointer
 * @index: index
 * Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *cur = head;
	unsigned int n = 0;

	while (cur)
	{
		if (n == index)
			return (cur);
		cur = cur->next;
		n++;
	}
	return (NULL);
}
