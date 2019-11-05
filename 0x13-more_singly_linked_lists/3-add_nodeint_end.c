#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end
 * @head: heade
 * @n: value
 *
 * Return: length list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_list = malloc(sizeof(listint_t));
	listint_t *current = *head;

	if (new_list == NULL)
		return (NULL);

	(*new_list).n = n;
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
