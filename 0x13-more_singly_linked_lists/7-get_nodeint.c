#include "lists.h"
/**
 * get_nodeint_at_index - get a specific node by index
 * @head: header
 * @index: index
 *
 * Return: eturns the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *retValue;

	if (head == NULL)
	{
		return (NULL);
	}

	if (index != 0)
		retValue = get_nodeint_at_index(head->next, (index - 1));
	else
		return (head);

	return (retValue);
}
