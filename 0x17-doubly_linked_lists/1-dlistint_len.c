#include "lists.h"
/**
 * dlistint_len - number of elements in a linked list
 * @h: head
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	unsigned int cnt = 0;

	if (h)
	{
		cnt += dlistint_len(h->next);
		cnt++;
	}

	return (cnt);
}
