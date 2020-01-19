#include "hash_tables.h"

/**
 * hash_table_delete - free all hash table
 * @ht: hash table
 *
 * Return: is a void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current = NULL, *next = NULL;
	unsigned long int count = 0;

	if (ht == NULL)
		return;
	if (ht->array == NULL)
	{
		free(ht);
		return;
	}
	for (; count < ht->size; count++)
	{
		current = ht->array[count];
		while (current != NULL)
		{
			next = current->next;
			free(current->key);
			free(current->value);
			free(current);
			current = next;
		}
	}
	free(ht->array);
	free(ht);
}
