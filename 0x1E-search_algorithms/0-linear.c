#include "search_algos.h"
/**
 * linear_search - searches for a value in an array
 * @array: *p to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: index or -1 if not
 */
int linear_search(int *array, size_t size, int value)
{
	size_t cnt = 0;

	if (array == NULL)
		return (-1);

	for (cnt = 0; cnt < size; cnt++)
	{
		printf("Value checked array[%d] = [%d]\n", (int)cnt, array[cnt]);
		if (array[cnt] == value)
			return ((int)cnt);
	}

	return (-1);
}
