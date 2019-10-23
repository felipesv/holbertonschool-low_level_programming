#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter
 * @array: array
 * @size: array size
 * @action: function
 *
 * Return: 0 success
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			action(*(array + i));
		}
	}
}
