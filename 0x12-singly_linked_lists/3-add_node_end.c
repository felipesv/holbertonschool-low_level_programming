#include "lists.h"
/**
 * add_node_end - adds a new node at the end
 * @head: list
 * @str: string to duplicate
 *
 * Return: pointer
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int ln = lengthArray(str);
	list_t *new_list = malloc(sizeof(list_t));
	list_t *current = *head;

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
	(*new_list).next = NULL;

	if (*head == NULL)
	{
		*head = new_list;
		return (*head);
	}

	while (1)
	{
		if ((*current).next == NULL)
		{
			(*current).next = new_list;
			break;
		}
		else
			current = (*current).next;
	}

	return (*head);
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
