#include "hash_tables.h"

/**
 * hash_table_set - add in the hash table
 * @ht: hash table
 * @key: position in the array
 * @value: val to store
 *
 * Return: 1 success, 0 fail
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int hash_index = 0;
	hash_node_t *new_node = NULL, *current_node = NULL;
	char *new_value = NULL;

	if (ht == NULL || key == NULL || strcmp(key, "") == 0 || value == NULL)
		return (0);
	new_value = strdup(value);
	if (new_value == NULL)
		return (0);
	hash_index = key_index((const unsigned char *) key, (*ht).size);
	current_node = (*ht).array[hash_index];
	while (current_node != NULL)
	{
		if (strcmp(key, (*current_node).key) == 0)
		{
			free((*current_node).value);
			(*current_node).value = new_value;
			return (1);
		}
		current_node = (*current_node).next;
	}

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(new_value);
		return (0);
	}
	(*new_node).value = new_value;
	(*new_node).key = strdup(key);
	(*new_node).next = (*ht).array[hash_index];
	(*ht).array[hash_index] = new_node;
	return (1);
}
