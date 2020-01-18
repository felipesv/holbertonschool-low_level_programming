#include "hash_tables.h"
/**
 * hash_table_print - print a hash table
 * @ht: hash table
 *
 * Return: is avoid
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int cnt = 0;
	hash_node_t *node = NULL;
	char *comma = "";

	printf("{");
	if (ht != NULL)
	{
		for (cnt = 0; cnt < (*ht).size; cnt++)
		{
			node = (*ht).array[cnt];

			while (node != NULL)
			{
				printf("%s'%s': '%s'", comma, (*node).key, (*node).value);
				comma = ",";
				node = (*node).next;
			}

		}
	}
	printf("}\n");
}