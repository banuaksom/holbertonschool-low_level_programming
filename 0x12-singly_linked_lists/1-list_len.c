#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list
 * @h: pointer to a list
 * Return: number of elements in linked list
 */
size_t list_len(const list_t *h)
{
	unsigned int i;

	for (i = 0; h; i++)
	{
		h = h->next;
	}
	return (i);
}
