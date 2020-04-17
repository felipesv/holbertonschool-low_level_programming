#include "search_algos.h"
/**
 * jump_search - searches for a value in a sorted array
 * @array: *p to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: index or -1 if not
 */
int jump_search(int *array, size_t size, int value)
{
	int step = 0, prev = 0;
	int small = min(step, size);

	printf("Value checked array[%d] = [%d]\n", small, array[small]);
	while (array[small] < value)
	{
		prev = step;
		step += sqrt(size);
		if (prev >= (int)size)
		{
			step = prev;
			prev = step - sqrt(size) + 1;
			break;
		}
		small = min(step, size);
		if (array[small] < value && step < (int)size)
			printf("Value checked array[%d] = [%d]\n", small, array[small]);
	}
	printf("Value found between indexes [%d] and [%d]\n", prev, step);
	while (array[prev] < value)
	{
		if (prev == min(step, size))
			return (-1);
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		prev++;
	}

	printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
	if (array[prev] == value)
		return (prev);

	return (-1);
}
/**
 * min - min number of two
 * @x: number 1
 * @y: number 2
 * Return: min number
 */
int min(int x, int y)
{
	return (x < y ? x : y);
}
