#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node
 * @head: head
 * @index: index node
 *
 * Return: node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int cnt = 0;

	if (head == NULL)
		return (NULL);

	while (current != NULL)
	{
		if (cnt == index)
			return (current);

		current = current->next;
		cnt++;
	}

	return (NULL);
}
