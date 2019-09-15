#include "lists.h"
/**
  * print_dlistint - prints all the elements of a dlistint_t list
  * @h: pointer to dlistint_t list
  * Return: number of nodes
  */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *new = h;
	size_t elements = 0;

	while (new)
	{
		printf("%d\n", new->n);
		new = new->next;
		elements++;
	}
	return (elements);
}
