#include "lists.h"
/**
 * print_listint - printf the content of the list
 * @h: list to print
 *
 * Return: length list
 */
size_t print_listint(const listint_t *h)
{
	unsigned int cnt = 0;

	if (h)
	{
		printf("%d\n", h->n);
		cnt++;
		cnt += print_listint(h->next);
	}

	return (cnt);
}
