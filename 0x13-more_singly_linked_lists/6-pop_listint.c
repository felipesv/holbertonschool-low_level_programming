#include "lists.h"
/**
 * pop_listint -  deletes the head node
 * @head: header
 *
 * Return: head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *currentHead = *head;
	listint_t *nextHead;

	if (currentHead == NULL)
	{
		return (0);
	}

	nextHead = (*currentHead).next;
	*head = nextHead;

	free(currentHead);

	return ((*currentHead).n);
}
