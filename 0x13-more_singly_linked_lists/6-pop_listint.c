#include "lists.h"
/**
 * pop_listint -  deletes the head node
 * @head: header
 *
 * Return: head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *nextHead;
	int n;

	if (head)
	{
		nextHead = (*head)->next;
		n = (*head)->n;
		free(*head);
		*head = nextHead;

		return (n);
	}
	else
	{
		return (0);
	}
}
