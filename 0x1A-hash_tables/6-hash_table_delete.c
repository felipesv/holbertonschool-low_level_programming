#include "hash_tables.h"

/**
 * hash_table_delete - free all hash table
 * @ht: hash table
 *
 * Return: is a void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int cnt = 0;
	hash_node_t *node = NULL, *temp = NULL;

	if (ht == NULL)
		return;

	if ((*ht).array != NULL)
	{
		for (cnt = 0; cnt < (*ht).size; cnt++)
		{
			node = (*ht).array[cnt];
			while (node != NULL)
			{
				temp = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = temp;
			}
		}
		free((*ht).array);
	}
	free(ht);
}
