#include "hash_tables.h"
/**
* hash_table_get - retrieves a value associated with a key
* @ht: pointer to hash table
* @key: key
* Return: value of the given key
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *current;
	unsigned long int index;

	if (ht && key)
	{
		index = key_index((unsigned char *)key, ht->size);
		current = ht->array[index];
		while (current)
		{
			if (!strcmp(current->key, key))
				return (current->value);
			current = current->next;
		}
	}
	return (NULL);
}
