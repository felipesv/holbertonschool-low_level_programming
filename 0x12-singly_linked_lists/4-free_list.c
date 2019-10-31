#include "lists.h"
/**
 * free_list - free a list
 * @head: list
 *
 * Return: pointer
 */
void free_list(list_t *head)
{

	if (head != NULL)
	{
		free_list(head->next);
		free(head->str);
	}

	free(head);
}
