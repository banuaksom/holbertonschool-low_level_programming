#include "lists.h"
/**
  * reverse_listint - reverses a linked list
  * @head: pointer
  * Return: pointer
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = *head;
	listint_t *next;

	while (current->next != NULL)
	{
		next = current->next;
		current->next = next->next;
		next->next = (*head);
		*head = next;
	}
	return (*head);
}
