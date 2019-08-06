#include "lists.h"
/**
  * get_nodeint_at_index - returns the nth node
  * @head: pointer
  * @index: node index
  * Return: nth node
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; head; i++)
	{
		if (i == index)
			return (head);
		head = head->next;
	}
	return (NULL);
}
