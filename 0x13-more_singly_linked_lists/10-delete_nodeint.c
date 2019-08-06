#include "lists.h"
/**
  * delete_nodeint_at_index - deletes the nodeat index
  * @head: pointer
  * @index: index of deleted node
  * Return: 1 if success, -1 if fail
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *deleted;
	listint_t *swap = *head;

	if (!*head)
		return (-1);
	for (i = 0; *head && index; i++)
	{
		if (!swap)
			return (-1);
		if (i == index - 1)
			break;
		swap = swap->next;
	}
	if (index)
	{
		deleted = swap->next->next;
		free(swap->next);
		swap->next = deleted;
	}
	else
	{
		*head = (*head)->next;
		free(swap);
	}
	return (1);
}
