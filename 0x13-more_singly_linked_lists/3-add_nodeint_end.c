#include "lists.h"
/**
  * add_nodeint_end -  adds a new node at the end of a list
  * @head: pointer
  * @n: value
  * Return: address of the new element
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *old = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (!*head)
	{
		*head = new;
		return (*head);
	}
	while (old->next)
		old = old->next;
	old->next  = new;
	return (new);
}

