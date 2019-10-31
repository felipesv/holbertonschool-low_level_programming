#include "lists.h"
/**
 * print_list - printf the content of the list
 * @h: list to print
 *
 * Return: length list
 */
size_t print_list(const list_t *h)
{
	unsigned int cnt = 0;

        if (h != NULL)
        {
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		cnt++;

		cnt += print_list(h->next);
        }

        return (cnt);
}
