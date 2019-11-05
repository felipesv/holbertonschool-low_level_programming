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
	listint_t *current = *head;
	unsigned int cnt = 0;
	int n = -1;

	if (head && *head)
	{
		if (index == 0)
		{
			current = *head;
			n = current->n;
			*head = current->next;
			free(current);
			return (n);
		}

		while (current)
		{
			if (cnt == index)
			{
				current = *head;
				n = 1;
				*head = current->next;
				free(current);
				break;
			}

			cnt++;
			current = current->next;
		}
	}

	return (n);
}
