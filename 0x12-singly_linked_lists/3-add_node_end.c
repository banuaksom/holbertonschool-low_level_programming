#include "lists.h"
/**
 * _strlen - returns the length of a string
 * @s: pointer to string
 * Return: the length of a string
 */
int _strlen(const char *s)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		;
	}
	return (i);
}

/**
 * add_node_end - adds a node at the end of a list
 * @head: pointer to address of a list
 * @str: pointer to string
 * Return: address of new a element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *old = *head;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = NULL;
	if (*head == '\0')
	{
		*head = new;
		return (*head);
	}
	while (old->next)
		old = old->next;
	old->next = new;
	return (new);
}
