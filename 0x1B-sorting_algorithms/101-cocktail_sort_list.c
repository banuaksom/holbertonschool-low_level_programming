#include "sort.h"
/**
 * cocktail_sort_list - cocktail shaker sort
 * @list: pointer to doubly linked list
 */
void cocktail_sort_list(listint_t **list)
{
	listint_t *cur;
	int switch_dir = 1;

	if (!list)
		return;
	cur = *list;
	while (switch_dir)
	{
		switch_dir = 0;
		switch_dir = b_sort(*&list, &cur, 1);
		if (!switch_dir)
			break;
		switch_dir = b_sort(*&list, &cur, 0);
	}
}
/**
 * b_sort - sorts nodes in acsending order
 * @head: pointer to ddl
 * @cur: pointer to a node read
 * @switch_dir: flag to switch the direction (1 forward, 0 backward)
 * Return: 1 if nodes are swaped, otherwise - 0
 */
int b_sort(listint_t **head, listint_t **cur, int switch_dir)
{
	int swapped = 0;

	if (switch_dir)
		while ((*cur)->next)
		{
			if ((*cur)->n > (*cur)->next->n)
			{
				swap_nodes(*&head, *cur, (*cur)->next);
				swapped = 1;
			}
			else
				(*cur) = (*cur)->next;
		}
	else
		while ((*cur)->prev)
		{
			if ((*cur)->n < (*cur)->prev->n)
			{
				swap_nodes(*&head, (*cur)->prev, *cur);
				swapped = 1;
			}
			else
				*cur = (*cur)->prev;
		}
	return (swapped);
}
/**
 * swap_nodes - swaps nodes and prints list
 * @head: pointer to a ddl
 * @node1: first node
 * @node2: second node
 */
void swap_nodes(listint_t **head, listint_t *node1, listint_t *node2)
{
	if (!*head)
		return;
	if (node1->prev)
		node1->prev->next = node2;
	else
		(*head) = node2;
	if (node2->next)
		node2->next->prev = node1;
	node2->prev = node1->prev;
	node1->next = node2->next;
	node2->next = node1;
	node1->prev = node2;
	print_list(*head);
}
