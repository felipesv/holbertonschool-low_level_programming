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
	hash_node_t *node = NULL;

	if ((*ht).array != NULL)
	{
		for (cnt = 0; cnt < (*ht).size; cnt++)
		{
			node = (*ht).array[cnt];
			free_list(node);
		}
	}

	free((*ht).array);
	free(ht);
}
/**
 * free_list - free a list
 * @head: list
 *
 * Return: pointer
 */
void free_list(hash_node_t *head)
{

	if (head != NULL)
	{
		free_list(head->next);
		free(head->key);
		free(head->value);
		free(head);
	}
}