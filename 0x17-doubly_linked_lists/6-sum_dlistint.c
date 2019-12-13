#include "lists.h"
/**
 * sum_dlistint - sum of all the data (n)
 * @head: head
 *
 * Return: node
 */
int sum_dlistint(dlistint_t *head)
{
	unsigned int sum = 0;

	if (head != NULL)
	{
		sum += head->n + sum_dlistint(head->next);
	}

	return (sum);
}
