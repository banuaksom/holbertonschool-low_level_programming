#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: pointer to a hash table
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current;
	unsigned long int i = 0;
	int flag = 0;

	if (!ht)
		return;
	printf("{");
	while (i < ht->size)
	{
		current = ht->array[i];
		while (current)
		{
			if (flag)
				printf(", ");
			printf("'%s': '%s'", current->key, current->value);
			current = current->next;
			flag = 1;
		}
		i++;
	}
	printf("}\n");
}
