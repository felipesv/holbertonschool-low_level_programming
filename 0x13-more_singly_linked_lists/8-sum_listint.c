#include "lists.h"
/**
 * sum_listint - all the data (n)
 * @head: header
 *
 * Return: eturns the nth node
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}

	sum = head->n;
	sum += sum_listint(head->next);

	return (sum);
}
