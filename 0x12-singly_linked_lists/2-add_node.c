#include "lists.h"
/**
 * add_node - add node at the begining
 * @head: list to count
 * @str:
 *
 * Return: address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	int ln = lengthArray(str);
	list_t *new_list = malloc(sizeof(list_t));

	if (new_list == NULL)
		return (NULL);

	(*new_list).str = malloc(sizeof(char) * (ln + 1));
	if ((*new_list).str == NULL)
	{
		free(new_list);
		return (NULL);
	}

	(*new_list).str = strdup(str);
	(*new_list).len = ln;
	(*new_list).next = *head;
	*head = new_list;

	return (new_list);
}
/**
 * lengthArray - length array
 * @array: array
 *
 * Return: return string cocatenated
 */
unsigned int lengthArray(const char *array)
{
	unsigned int length = 0;

	while (array[length] != '\0')
	{
		length++;
	}

	return (length);
}
