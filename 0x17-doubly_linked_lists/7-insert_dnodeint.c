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

	if (*h == NULL && idx == 0)
	{
		*h = newNode;
		return (newNode);
	}
	while (current != NULL)
	{
		if (cnt == idx)
		{
			if (idx != 0)
			{
				current->prev->next = newNode;
				newNode->prev = current->prev;
			}
			newNode->next = current;
			current->prev = newNode;
			if (idx == 0)
				*h = newNode;
			return (newNode);
		}

		current = current->next;
		cnt++;
	}
	free(newNode);
	if (cnt == idx)
		return (add_dnodeint_end(h, n));
	return (NULL);
}
