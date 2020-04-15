#include "search_algos.h"
/**
 * binary_search - searches for a value in a sorted array
 * @array: *p to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: index or -1 if not
 */
int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);
	return (binary_recursion(array, value, 0, size - 1));
}
/**
 * binary_recursion - searches for a value in a sorted array
 * @array: *p to the first element of the array to search in
 * @value: is the value to search for
 * @from: index to start search
 * @to: index to finish search
 * Return: index or -1 if not
 */
int binary_recursion(int *array, int value, size_t from, size_t to)
{
	size_t middle = 0;

	if (from > to)
		return (-1);

	print_array(array, from, to);

	middle = from + (to - from) / 2;

	if (array[middle] == value)
		return ((int)middle);
	else if (array[middle] > value)
		return (binary_recursion(array, value, from, middle - 1));
	else
		return (binary_recursion(array, value, middle + 1, to));
}
/**
 * print_array - print array
 * @array: *p to the first element of the array to search in
 * @from: index to start search
 * @to: index to finish search
 * Return: is a void
 */
void print_array(int *array, size_t from, size_t to)
{
	size_t cnt = 0;
	char *comma = "";

	printf("Searching in array: ");
	for (cnt = from; cnt <= to; cnt++)
	{
		printf("%s%d", comma, array[cnt]);
		comma = ", ";
	}
	printf("\n");
}
