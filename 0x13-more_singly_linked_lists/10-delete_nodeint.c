#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: heade
 * @index: index
 *
 * Return: 1 success, -1 fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head, *prevCurrent = NULL;
	unsigned int cnt = 0;

	if (head && *head)
	{
		if (index == 0)
		{
			*head = current->next;
			free(current);
			return (1);
		}

		while (1)
		{
			prevCurrent = current;

			if (!prevCurrent)
				break;

			current = current->next;

			if (index == ++cnt)
			{
				prevCurrent->next = current->next;
				free(current);
				return (1);
			}
		}
	}
	return (-1);
}
