#include "hash_tables.h"
/**
 * hash_table_create - create a hash table
 * @size: size of the hash table
 *
 * Return: pointer to the hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_tab = NULL;
	unsigned long int cnt = 0;

	hash_tab = malloc(sizeof(hash_table_t *));

	if (hash_tab == NULL)
		return (NULL);

	(*hash_tab).array = malloc(sizeof(hash_node_t *) * size);
	if ((*hash_tab).array == NULL)
		return (NULL);

	for (cnt = 0; cnt < size; cnt++)
		(*hash_tab).array[cnt] = NULL;
	(*hash_tab).size = size;
	return (hash_tab);
}