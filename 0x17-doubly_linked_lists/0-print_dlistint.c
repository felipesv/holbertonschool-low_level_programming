#include "lists.h"
/**
 * print_dlistint - print all the nodes
 * @h: head
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	unsigned int cnt = 0;

	if (h)
	{
		printf("%d\n", h->n);
		cnt += print_dlistint(h->next);
		cnt++;
	}

	return (cnt);
}
