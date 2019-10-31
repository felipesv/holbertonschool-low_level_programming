#include "lists.h"
/**
 * list_len - counter list
 * @h: list to count
 *
 * Return: length list
 */
size_t list_len(const list_t *h)
{
	unsigned int cnt = 0;

	if (h != NULL)
	{
		cnt += list_len(h->next);
		cnt++;
	}

	return (cnt);
}
