#include "lists.h"
/**
  * insert_nodeint_at_index - inserts a new node at a given position
  * @head: pointer
  * @idx: index to add a new node
  * @n: value to add
  * Return: address of a new node
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *stop = *head;
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	if (!stop)
		return (NULL);
	for (i = 0; stop && idx; i++)
	{
		if (i == idx - 1)
			break;
		stop = stop->next;
	}
	new->n = n;
	if (idx)
	{
		new->next = stop->next;
		stop->next = new;
	}
	else
	{
		new->next = *head;
		*head = new;
	}
	return (new);
}
