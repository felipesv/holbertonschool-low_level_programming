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
	listint_t *next;

	if (current != NULL)
	{
		while (current != NULL)
		{
			next = current->next;
			free(current);
			current = next;
		}
		*head = NULL;
	}
}
