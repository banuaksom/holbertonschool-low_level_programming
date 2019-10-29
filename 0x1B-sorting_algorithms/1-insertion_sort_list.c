#include "sort.h"
/**
 * insertion_sort_list - sorts a dll of integers in ascending order
 * @head: pointer to a dll
 */
void insertion_sort_list(listint_t **head)
{
	listint_t *cur, *next_cur, *node_insert_after;
	listint_t *node_insert_before;

	if (!*head || !(*head)->next)
		return;
	cur = (*head)->next;
	next_cur = cur->next;
	while (cur)
	{
		node_insert_after = cur->prev;
		while (node_insert_after && node_insert_after->n > cur->n)
		{
			node_insert_after = node_insert_after->prev;
			delete_node(cur);
			if (node_insert_after)
			{
				node_insert_before = node_insert_after->next;
				node_insert_after->next = cur;
				cur->prev = node_insert_after;
				cur->next = node_insert_before;
				node_insert_before->prev = cur;
			}
			else
			{
				cur->next = *head;
				(*head)->prev = cur;
				*head = cur;
			}
			print_list(*head);
		}
		cur = next_cur;
		if (cur)
			next_cur = cur->next;
	}
}

/**
 * delete_node - deletes node
 * @node: pointer to a node
 */
void delete_node(listint_t *node)
{
	listint_t *prev = node->prev;
	listint_t *next = node->next;

	if (!node)
		return;


	node->next = NULL;
	node->prev = NULL;

	if (prev)
		prev->next = next;
	if (next)
		next->prev = prev;
}
