#include "hash_tables.h"

/**
 * hash_table_get - get the value with the key
 * @ht: hash table
 * @key: key to search
 *
 * Return: return the value or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int hash_index = 0;
	hash_node_t *current_node = NULL;

	if (ht == NULL || key == NULL)
		return (NULL);

	hash_index = key_index((const unsigned char *) key, (*ht).size);
	current_node = (*ht).array[hash_index];

	if (current_node == NULL)
		return (NULL);

	while (current_node != NULL)
	{
		if (strcmp((*current_node).key, (char *) key) == 0)
			return ((*current_node).value);

		current_node = (*current_node).next;
	}

	return (NULL);
}
