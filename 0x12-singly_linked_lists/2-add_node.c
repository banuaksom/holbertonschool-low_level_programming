#include "lists.h"
#include "holberton.h"
/**
 * _strlen - returns the length of a string
 * @s: pointer to string
 * Return: the length of a string
 */
int _strlen(char *s)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		;
	}
	return (i);
}
/**
 * add_node - adds a node at the beginning of a list
 * @head: pointer to address of a list
 * @str: pointer to string
 * Return: address of new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (!new)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = *head;
	*head = new;
	return (*head);
}
