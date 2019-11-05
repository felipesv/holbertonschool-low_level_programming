#include "lists.h"
/**
 * free_listint2 - frees a list
 * @head: header
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *current = *head;

	if (current != NULL)
	{
		free_listint2(&current->next);
		free(current);
		*head = NULL;
	}
}
