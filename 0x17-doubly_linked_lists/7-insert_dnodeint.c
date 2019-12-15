#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: head
 * @idx: index
 * @n: number
 *
 * Return: node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode, *current = *h;
	unsigned int cnt = 0;

	if (h == NULL)
		return (NULL);

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = NULL;

	if (*h == NULL)
	{
		*h = newNode;
		return (newNode);
	}

	while (current != NULL)
	{
		if (cnt == idx)
		{
			current->prev->next = newNode;
			newNode->prev = current->prev;
			newNode->next = current;
			current->prev = newNode;
			return (newNode);
		}

		current = current->next;
		cnt++;
	}

	free(newNode);
	return (NULL);
}
