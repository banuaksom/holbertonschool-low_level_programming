#include "lists.h"
size_t dlistint_len(const dlistint_t *h);
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer
 * @idx: index of the list where the new node should be added
 * @n: data
 * Return: address of new node or NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *cur = *h, *new;
	unsigned int i = 1;

	if ((!cur && idx) || idx > dlistint_len(*h))
		return (NULL);
	while (i < idx)
	{
		if (!cur)
			return (NULL);
		++i;
		cur = cur->next;
	}
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	if (idx)
	{
		new->prev = cur;
		new->next = cur->next;
		cur->next = new;
		if (new->next)
		{
			cur = new->next;
			cur->prev = new;
		}
	}
	else
	{
		new->prev = NULL;
		new->next = cur;
		if (new->next)
			cur->prev = new;
		*h = new;
	}
	new->n = n;
	return (new);
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
