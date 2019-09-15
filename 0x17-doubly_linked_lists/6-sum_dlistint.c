#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data of a linked list
 * @head: pointer
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *cur;
	int sum;

	cur = head;
	sum = 0;

	while (cur)
	{
		sum += cur->n;
		cur = cur->next;
	}
	return (sum);
}
