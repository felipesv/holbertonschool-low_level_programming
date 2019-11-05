#include "lists.h"
/**
 * listint_len - count the elements
 * @h: list
 *
 * Return: returns the number of elements
 */
size_t listint_len(const listint_t *h)
{
	unsigned int cnt = 0;

	if (h)
	{
		cnt++;
		cnt += listint_len(h->next);
	}

	return (cnt);
}
