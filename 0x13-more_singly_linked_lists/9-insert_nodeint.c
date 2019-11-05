#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: heade
 * @idx: index
 * @n: value
 *
 * Return: length list
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current = *head, *prevCurrent = NULL;
	listint_t *newNode = malloc(sizeof(listint_t));
	unsigned int cnt = 0;

	if (newNode == NULL)
		return (NULL);

	if (*head)
	{
		newNode->n = n;

		if (idx == 0)
		{
			newNode = (*head)->next;
			*head = newNode;
			return (newNode);
		}

		while (1)
		{
			prevCurrent = current;

			if (!prevCurrent)
				break;

			current = current->next;
			cnt++;

			if (idx == cnt)
			{
				prevCurrent->next = newNode;
				newNode->next = current;
				return (newNode);
			}
		}

	}
	free(newNode);
	return (NULL);
}
