#include "lists.h"
/**
 * add_nodeint - change de head
 * @head: head
 * @n: value
 *
 * Return: length list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_list = malloc(sizeof(listint_t));

	if (new_list == NULL)
	{
		return (NULL);
	}

	(*new_list).n = n;
	(*new_list).next = *head;
	*head = new_list;

	return (new_list);
}
