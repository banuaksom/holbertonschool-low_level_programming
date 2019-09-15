#include "lists.h"
size_t dlistint_len(const dlistint_t *h);
/**
 * delete_dnodeint_at_index - Deletes the node at index
 * @head: pointer
 * @index: index
 * Return: int
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *cur = *head, *tmp = *head;
	unsigned int i = 1;

	if (!*head || index > dlistint_len(*head))
		return (-1);

	while (i < index)
	{
		if (!tmp)
			return (-1);
		++i;
		tmp = tmp->next;
	}
	if (index)
	{
		cur = tmp->next;
		tmp->next = cur->next;
		if (tmp->next)
		{
			tmp = tmp->next;
			tmp->prev = cur->prev;
		}
	}
	else
	{
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;

	}
	free(cur);
	return (1);
}
/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * @h: pointer
 *Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *new = h;
	size_t elements = 0;

	while (new)
	{
		new = new->next;
		elements++;
	}
	return (elements);
}
