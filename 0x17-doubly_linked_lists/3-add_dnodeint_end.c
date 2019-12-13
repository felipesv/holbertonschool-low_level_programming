#include "lists.h"
/**
 * add_dnodeint_end -  adds a new node at the end
 * @head: head
 * @n: number
 *
 * Return: the address of the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *current = *head;

	if (head == NULL)
		return (NULL);

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	while (current != NULL)
	{
		if (current->next == NULL)
		{
			current->next = newNode;
			newNode->prev = current;
			return (newNode);
		}

		current = current->next;
	}

	return (NULL);
}
