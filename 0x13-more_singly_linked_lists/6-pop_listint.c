#include "lists.h"
/**
  * pop_listint - deletes the head node of a linked list
  * @head: a pointer
  * Return: head node's data
  */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int data;

	if (*head)
	{
		data = (*head)->n;
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	return (data);
}
