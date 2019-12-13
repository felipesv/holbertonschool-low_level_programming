#include "lists.h"
/**
 * free_dlistint -  free a
 * @head: head
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	if (head != NULL)
	{
		free_dlistint(head->next);
		free(head);
	}
}
