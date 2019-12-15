#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index
 * @head: head
 * @index: index
 *
 * Return: 1 success, -1 failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int cnt = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		if (current->next != NULL)
			current->next->prev = NULL;
		free(current);
		return (1);
	}

	while (current != NULL)
	{
		if (cnt == index)
		{
			if (current->next != NULL && current->prev != NULL)
			{
				current->next->prev = current->prev;
				current->prev->next = current->next;
			}
			free(current);
			return (1);
		}

		current = current->next;
		cnt++;
	}

	return (-1);
}
