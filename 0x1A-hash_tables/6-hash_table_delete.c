#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 * @ht: pointer to a hash table
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *holder, *current;
	unsigned long int i = 0;

	if (!ht)
		return;

	while (i < ht->size)
	{
		holder = ht->array[i];
		while (holder)
		{
			current = holder->next;
			free(holder->key);
			free(holder->value);
			free(holder);
			holder = current;
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
